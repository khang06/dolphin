#include <gccore.h>

#define FUZZ_MAGIC_WRITE 0xAABBCCDD
#define FUZZ_PAYLOAD_COUNT 512

#define EVENT_STOP 0
#define EVENT_READ8 1
#define EVENT_WRITE8 2
#define EVENT_READ16 3
#define EVENT_WRITE16 4
#define EVENT_READ32 5
#define EVENT_WRITE32 6

typedef struct {
  u32 event;
  u32 addr;
  u32 value;
} fuzz_event_t;

volatile fuzz_event_t g_fuzz_payload[FUZZ_PAYLOAD_COUNT + 1] = {};

static inline void nyx_init(volatile void *fuzz_payload) {
  *(vu32 *)0xCC007000 = (u32)fuzz_payload;
}

static inline void fast_exit() { *(vu32 *)0xCC007004 = FUZZ_MAGIC_WRITE; }

int main() {
  SYS_Report("HARNESS: hello!\n");
  nyx_init(g_fuzz_payload);

  //SYS_Report("HARNESS: inner fuzz loop...\n");
  for (int i = 0; i < FUZZ_PAYLOAD_COUNT; i++) {
    switch (g_fuzz_payload[i].event) {
    case EVENT_STOP:
      goto exit;
    case EVENT_READ8:
      g_fuzz_payload[i].value = *(vu8 *)g_fuzz_payload[i].addr;
      break;
    case EVENT_WRITE8:
      *(vu8 *)g_fuzz_payload[i].addr = (u8)g_fuzz_payload[i].value;
      break;
    case EVENT_READ16:
      g_fuzz_payload[i].value = *(vu16 *)g_fuzz_payload[i].addr;
      break;
    case EVENT_WRITE16:
      *(vu16 *)g_fuzz_payload[i].addr = (u16)g_fuzz_payload[i].value;
      break;
    case EVENT_READ32:
      g_fuzz_payload[i].value = *(vu32 *)g_fuzz_payload[i].addr;
      break;
    case EVENT_WRITE32:
      *(vu32 *)g_fuzz_payload[i].addr = g_fuzz_payload[i].value;
      break;
    }
  }

exit:
  fast_exit();
  SYS_Report("HARNESS: didn't get reloaded, gonna hang now\n");
  while (1)
    ;
  return 0;
}
