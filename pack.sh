#!/bin/bash
PACKER="../nyx/packer/packer/nyx_packer.py"
CONFIG_GEN="../nyx/packer/packer/nyx_config_gen.py"
SHAREDIR="packed"

python3 $PACKER build/Binaries/dolphin-emu-nogui $SHAREDIR spec instrumentation \
    --purge \
    -spec Spec \
    --delayed_init \
    --fast_reload_mode
python3 $CONFIG_GEN $SHAREDIR -m 1024 -n 1000000000 Kernel
