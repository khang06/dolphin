#include <dlfcn.h>

#include "Common/Logging/Log.h"
#include "Core/HW/MMIO.h"
#include "Core/HW/Memmap.h"
#include "Core/System.h"
#include "Fuzzer.h"

#define FUZZ_MAGIC_WRITE 0xAABBCCDD
#define FUZZ_PAYLOAD_COUNT 64

typedef struct
{
  u32 event;
  u32 addr;
  u32 value;
} fuzz_event_t;

static void nyx_init_dummy()
{
  fmt::println("nyx_init called");
}

static void fast_exit_dummy()
{
  fmt::println("nyx_init called");
}

static bool s_is_fuzzing = false;
static void (*s_nyx_init)();
static void (*s_fast_exit)();

namespace Fuzzer
{

void ForceFastExit()
{
  if (s_is_fuzzing)
    s_fast_exit();
}

void RegisterMMIO(MMIO::Mapping* mmio, u32 base)
{
  //mmio->DumpHandlers();

  void* ld_preload_fuzz = dlopen("ld_preload_fuzz.so", RTLD_LAZY);
  if (ld_preload_fuzz)
  {
    fmt::println("nyx_init called");
    s_nyx_init = (void (*)())dlsym(ld_preload_fuzz, "nyx_init");
    if (!s_nyx_init)
    {
      fmt::println("Failed to find nyx_init in ld_preload_fuzz.so: {}", dlerror());
      exit(1);
    }

    s_fast_exit = (void (*)())dlsym(ld_preload_fuzz, "fast_exit");
    if (!s_fast_exit)
    {
      fmt::println("Failed to find fast_exit in ld_preload_fuzz.so: {}", dlerror());
      exit(1);
    }
  }
  else
  {
    fmt::println("Using dummy nyx functions (failed to import: {})", dlerror());
    s_nyx_init = nyx_init_dummy;
    s_fast_exit = fast_exit_dummy;
  }

  mmio->Register(
      base, MMIO::InvalidRead<u32>(),
      MMIO::ComplexWrite<u32>([](Core::System& system_, u32, u32 val) {
        if (!s_is_fuzzing)
        {
          fmt::println("Nyx init triggered, writing payload to 0x{:08X}", val);
          s_nyx_init();

          fuzz_event_t fuzz_event;
          for (size_t i = 0; i < FUZZ_PAYLOAD_COUNT; i++)
          {
            //fmt::println("Reading event {}", i);
            if (read(STDIN_FILENO, &fuzz_event, sizeof(fuzz_event)) != sizeof(fuzz_event))
              break;

            auto& mem = system_.GetMemory();
            mem.Write_U32(val + i * sizeof(fuzz_event), Common::swap32(fuzz_event.event));
            mem.Write_U32(val + i * sizeof(fuzz_event) + 4, Common::swap32(fuzz_event.addr));
            mem.Write_U32(val + i * sizeof(fuzz_event) + 8, Common::swap32(fuzz_event.value));
          }
        }
        s_is_fuzzing = true;
      }));

  mmio->Register(base | 0x4, MMIO::InvalidRead<u32>(),
                 MMIO::ComplexWrite<u32>([](Core::System&, u32, u32 val) {
                   if (s_is_fuzzing && val == FUZZ_MAGIC_WRITE)
                     s_fast_exit();
                 }));
}

}  // namespace Fuzzer
