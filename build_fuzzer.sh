#!/bin/bash
set -euo pipefail

make -C Harness -j"$(nproc)"
mkdir -p build-nyx
CC=afl-clang-fast CXX=afl-clang-fast++ LD=afl-clang-fast cmake -G Ninja -B build-nyx . \
  -DUSE_SYSTEM_FMT=OFF \
  -DCMAKE_CXX_FLAGS='-include cstring' \
  -DENABLE_X11=OFF \
  -DENABLE_EGL=OFF \
  -DENABLE_CLI_TOOL=OFF \
  -DUSE_UPNP=OFF \
  -DENABLE_LTO=OFF \
  -DENABLE_GENERIC=ON \
  -DENABLE_HEADLESS=ON \
  -DENABLE_ALSA=OFF \
  -DENABLE_PULSEAUDIO=OFF \
  -DENABLE_CUBEB=OFF \
  -DENABLE_LLVM=OFF \
  -DENABLE_TESTS=OFF \
  -DENABLE_VULKAN=OFF \
  -DUSE_MGBA=OFF \
  -DENABLE_AUTOUPDATE=OFF \
  -DUSE_RETRO_ACHIEVEMENTS=OFF \
  -DENABLE_ANALYTICS=OFF \
  -DENCODE_FRAMEDUMPS=OFF \
  -DENABLE_SDL=OFF \
  -DENABLE_HWDB=OFF \
  -DENABLE_EVDEV=OFF

cmake --build build-nyx --target dolphin-emu-nogui -j"$(nproc)"
