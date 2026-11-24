#!/bin/bash
PACKER="../nyx/packer/packer/nyx_packer.py"
CONFIG_GEN="../nyx/packer/packer/nyx_config_gen.py"
SHAREDIR="packed"

python3 $PACKER build-nyx/Binaries/dolphin-emu-nogui $SHAREDIR spec instrumentation \
    --purge \
    -spec Spec \
    --delayed_init \
    --fast_reload_mode \
    --no_pt_auto_conf_a \
    --no_pt_auto_conf_b

MAP_SIZE=$(AFL_DUMP_MAP_SIZE=1 build-nyx/Binaries/dolphin-emu-nogui)
sed -i "s/^LD_LIBRARY_PATH=/AFL_MAP_SIZE=${MAP_SIZE} LD_LIBRARY_PATH=/" "$SHAREDIR/fuzz_no_pt.sh"

python3 $CONFIG_GEN $SHAREDIR -m 1024 -n 1000000000 Kernel
