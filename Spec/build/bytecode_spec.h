//-------------------------
// Move this file to bytecode_spec.h
// and implemented in user spec part

//includes

#include "custom_includes.h"

#include "nyx.h"


/**

**/

void interpreter_user_init(interpreter_t *vm){
}

void interpreter_user_shutdown(interpreter_t *vm){
}


void handler_read16_cc000000( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000000;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000002( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000002;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000004( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000004;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000006( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000006;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00000a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00000a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000020( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000020;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000022( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000022;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000024( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000024;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000026( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000026;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000028( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000028;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00002a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00002a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00002c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00002c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00002e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00002e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000030( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000030;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000032( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000032;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000034( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000034;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000036( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000036;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000038( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000038;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00003a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00003a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00003c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00003c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00003e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00003e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000040( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000040;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000042( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000042;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000044( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000044;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000046( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000046;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000048( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000048;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00004a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00004a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00004c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00004c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00004e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00004e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000050( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000050;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000052( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000052;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000054( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000054;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000056( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000056;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000058( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000058;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00005a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00005a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc000064( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc000064;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001000( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001000;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001002( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001002;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001004( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001004;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001006( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001006;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001008( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001008;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00100a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00100a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00100e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00100e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001010( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001010;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001012( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001012;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001014( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001014;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001016( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001016;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001018( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001018;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00101a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00101a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00101c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00101c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00101e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00101e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001020( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001020;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001022( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001022;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001024( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001024;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001026( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001026;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc001028( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc001028;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00102a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00102a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00102c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00102c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00102e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00102e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002000( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002000;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002002( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002002;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002004( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002004;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002006( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002006;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002008( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002008;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00200a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00200a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00200c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00200c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00200e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00200e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002010( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002010;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002012( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002012;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002014( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002014;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002016( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002016;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002018( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002018;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00201a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00201a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00201c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00201c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00201e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00201e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002020( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002020;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002022( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002022;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002024( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002024;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002026( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002026;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002028( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002028;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00202a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00202a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00202c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00202c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00202e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00202e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002030( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002030;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002032( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002032;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002034( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002034;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002036( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002036;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002038( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002038;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00203a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00203a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00203c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00203c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00203e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00203e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002040( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002040;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002042( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002042;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002044( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002044;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002046( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002046;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002048( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002048;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00204a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00204a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00204c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00204c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00204e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00204e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002050( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002050;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002052( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002052;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002054( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002054;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002056( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002056;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002058( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002058;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00205a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00205a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00205c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00205c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00205e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00205e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002060( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002060;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002062( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002062;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002064( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002064;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002066( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002066;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002068( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002068;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00206a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00206a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00206c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00206c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00206e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00206e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002070( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002070;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002072( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002072;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc002074( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc002074;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004000( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004000;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004002( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004002;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004004( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004004;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004006( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004006;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004008( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004008;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00400a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00400a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00400c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00400c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00400e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00400e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004010( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004010;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00401c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00401c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00401e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00401e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004020( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004020;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004022( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004022;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004024( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004024;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004032( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004032;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004034( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004034;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004036( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004036;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004038( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004038;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00403a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00403a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00403c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00403c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00403e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00403e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004040( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004040;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004042( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004042;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004044( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004044;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004046( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004046;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004048( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004048;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00404a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00404a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00404c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00404c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00404e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00404e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004050( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004050;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004052( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004052;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004054( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004054;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004056( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004056;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc004058( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc004058;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00405a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00405a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005000( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005000;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005002( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005002;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005004( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005004;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005006( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005006;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00500a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00500a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005012( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005012;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005016( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005016;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00501a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00501a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005020( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005020;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005022( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005022;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005024( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005024;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005026( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005026;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005028( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005028;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00502a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00502a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005030( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005030;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005032( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005032;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc005036( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc005036;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00503a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00503a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc006480( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc006480;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc006482( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc006482;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc006484( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc006484;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc006486( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc006486;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc006488( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc006488;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00648a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00648a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00648c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00648c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00648e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00648e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc006490( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc006490;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc006492( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc006492;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc006494( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc006494;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc006496( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc006496;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc006498( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc006498;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00649a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00649a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00649c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00649c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc00649e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc00649e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064a0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064a0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064a2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064a2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064a4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064a4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064a6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064a6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064a8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064a8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064aa( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064aa;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064ac( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064ac;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064ae( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064ae;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064b0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064b0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064b2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064b2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064b4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064b4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064b6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064b6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064b8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064b8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064ba( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064ba;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064bc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064bc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064be( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064be;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064c0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064c0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064c2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064c2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064c4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064c4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064c6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064c6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064c8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064c8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064ca( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064ca;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064cc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064cc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064ce( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064ce;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064d0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064d0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064d2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064d2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064d4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064d4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064d6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064d6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064d8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064d8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064da( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064da;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064dc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064dc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064de( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064de;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064e0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064e0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064e2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064e2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064e4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064e4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064e6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064e6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064e8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064e8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064ea( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064ea;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064ec( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064ec;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064ee( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064ee;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064f0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064f0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064f2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064f2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064f4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064f4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064f6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064f6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064f8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064f8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064fa( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064fa;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064fc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064fc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cc0064fe( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcc0064fe;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd006480( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd006480;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd006482( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd006482;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd006484( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd006484;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd006486( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd006486;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd006488( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd006488;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd00648a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd00648a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd00648c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd00648c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd00648e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd00648e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd006490( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd006490;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd006492( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd006492;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd006494( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd006494;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd006496( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd006496;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd006498( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd006498;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd00649a( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd00649a;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd00649c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd00649c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd00649e( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd00649e;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064a0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064a0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064a2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064a2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064a4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064a4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064a6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064a6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064a8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064a8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064aa( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064aa;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064ac( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064ac;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064ae( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064ae;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064b0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064b0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064b2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064b2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064b4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064b4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064b6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064b6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064b8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064b8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064ba( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064ba;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064bc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064bc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064be( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064be;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064c0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064c0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064c2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064c2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064c4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064c4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064c6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064c6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064c8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064c8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064ca( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064ca;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064cc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064cc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064ce( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064ce;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064d0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064d0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064d2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064d2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064d4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064d4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064d6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064d6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064d8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064d8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064da( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064da;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064dc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064dc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064de( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064de;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064e0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064e0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064e2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064e2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064e4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064e4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064e6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064e6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064e8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064e8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064ea( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064ea;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064ec( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064ec;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064ee( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064ee;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064f0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064f0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064f2( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064f2;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064f4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064f4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064f6( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064f6;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064f8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064f8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064fa( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064fa;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064fc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064fc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read16_cd0064fe( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x3;
        data32[1] = 0xcd0064fe;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000000( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000000;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000002( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000002;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000004( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000004;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000006( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000006;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00000a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00000a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000020( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000020;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000022( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000022;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000024( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000024;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000026( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000026;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000028( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000028;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00002a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00002a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00002c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00002c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00002e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00002e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000030( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000030;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000032( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000032;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000034( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000034;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000036( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000036;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000038( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000038;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00003a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00003a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00003c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00003c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00003e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00003e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000040( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000040;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000042( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000042;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000044( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000044;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000046( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000046;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000048( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000048;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00004a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00004a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00004c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00004c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00004e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00004e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000050( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000050;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000052( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000052;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000054( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000054;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000056( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000056;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000058( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000058;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00005a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00005a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc000064( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc000064;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001000( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001000;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001002( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001002;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001004( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001004;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001006( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001006;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001008( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001008;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00100a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00100a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00100e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00100e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001010( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001010;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001012( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001012;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001014( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001014;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001016( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001016;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001018( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001018;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00101a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00101a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00101c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00101c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00101e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00101e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001020( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001020;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001022( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001022;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001024( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001024;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001026( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001026;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc001028( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc001028;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00102a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00102a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00102c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00102c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00102e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00102e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002000( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002000;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002002( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002002;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002004( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002004;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002006( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002006;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002008( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002008;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00200a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00200a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00200c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00200c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00200e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00200e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002010( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002010;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002012( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002012;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002014( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002014;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002016( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002016;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002018( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002018;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00201a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00201a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00201c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00201c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00201e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00201e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002020( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002020;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002022( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002022;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002024( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002024;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002026( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002026;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002028( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002028;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00202a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00202a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00202c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00202c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00202e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00202e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002030( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002030;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002032( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002032;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002034( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002034;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002036( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002036;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002038( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002038;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00203a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00203a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00203c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00203c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00203e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00203e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002040( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002040;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002042( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002042;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002044( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002044;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002046( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002046;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002048( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002048;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00204a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00204a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00204c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00204c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00204e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00204e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002050( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002050;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002052( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002052;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002054( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002054;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002056( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002056;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002058( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002058;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00205a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00205a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00205c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00205c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00205e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00205e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002060( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002060;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002062( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002062;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002064( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002064;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002066( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002066;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002068( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002068;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00206a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00206a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00206c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00206c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00206e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00206e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002070( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002070;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002072( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002072;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc002074( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc002074;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004000( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004000;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004002( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004002;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004004( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004004;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004006( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004006;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004008( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004008;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00400a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00400a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00400c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00400c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00400e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00400e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004010( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004010;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00401c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00401c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00401e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00401e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004020( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004020;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004022( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004022;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004024( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004024;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004032( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004032;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004034( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004034;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004036( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004036;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004038( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004038;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00403a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00403a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00403c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00403c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00403e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00403e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004040( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004040;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004042( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004042;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004044( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004044;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004046( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004046;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004048( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004048;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00404a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00404a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00404c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00404c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00404e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00404e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004050( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004050;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004052( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004052;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004054( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004054;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004056( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004056;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc004058( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc004058;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00405a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00405a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005000( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005000;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005002( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005002;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005004( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005004;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005006( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005006;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00500a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00500a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005012( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005012;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005016( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005016;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00501a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00501a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005020( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005020;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005022( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005022;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005024( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005024;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005026( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005026;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005028( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005028;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00502a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00502a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005030( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005030;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005032( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005032;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc005036( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc005036;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00503a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00503a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc006480( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc006480;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc006482( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc006482;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc006484( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc006484;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc006486( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc006486;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc006488( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc006488;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00648a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00648a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00648c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00648c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00648e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00648e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc006490( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc006490;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc006492( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc006492;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc006494( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc006494;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc006496( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc006496;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc006498( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc006498;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00649a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00649a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00649c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00649c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc00649e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc00649e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064a0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064a0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064a2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064a2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064a4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064a4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064a6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064a6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064a8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064a8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064aa( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064aa;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064ac( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064ac;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064ae( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064ae;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064b0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064b0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064b2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064b2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064b4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064b4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064b6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064b6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064b8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064b8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064ba( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064ba;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064bc( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064bc;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064be( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064be;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064c0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064c0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064c2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064c2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064c4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064c4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064c6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064c6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064c8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064c8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064ca( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064ca;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064cc( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064cc;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064ce( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064ce;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064d0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064d0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064d2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064d2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064d4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064d4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064d6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064d6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064d8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064d8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064da( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064da;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064dc( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064dc;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064de( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064de;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064e0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064e0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064e2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064e2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064e4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064e4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064e6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064e6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064e8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064e8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064ea( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064ea;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064ec( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064ec;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064ee( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064ee;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064f0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064f0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064f2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064f2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064f4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064f4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064f6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064f6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064f8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064f8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064fa( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064fa;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064fc( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064fc;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cc0064fe( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcc0064fe;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd006480( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd006480;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd006482( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd006482;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd006484( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd006484;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd006486( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd006486;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd006488( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd006488;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd00648a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd00648a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd00648c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd00648c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd00648e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd00648e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd006490( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd006490;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd006492( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd006492;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd006494( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd006494;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd006496( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd006496;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd006498( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd006498;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd00649a( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd00649a;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd00649c( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd00649c;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd00649e( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd00649e;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064a0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064a0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064a2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064a2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064a4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064a4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064a6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064a6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064a8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064a8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064aa( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064aa;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064ac( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064ac;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064ae( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064ae;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064b0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064b0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064b2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064b2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064b4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064b4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064b6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064b6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064b8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064b8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064ba( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064ba;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064bc( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064bc;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064be( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064be;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064c0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064c0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064c2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064c2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064c4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064c4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064c6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064c6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064c8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064c8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064ca( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064ca;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064cc( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064cc;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064ce( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064ce;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064d0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064d0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064d2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064d2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064d4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064d4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064d6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064d6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064d8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064d8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064da( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064da;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064dc( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064dc;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064de( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064de;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064e0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064e0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064e2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064e2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064e4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064e4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064e6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064e6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064e8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064e8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064ea( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064ea;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064ec( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064ec;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064ee( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064ee;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064f0( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064f0;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064f2( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064f2;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064f4( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064f4;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064f6( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064f6;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064f8( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064f8;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064fa( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064fa;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064fc( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064fc;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write16_cd0064fe( interpreter_t *vm, d_u16 *data_u16){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x4;
        data32[1] = 0xcd0064fe;
        data32[2] = *data_u16;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc003000( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc003000;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc003004( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc003004;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00300c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00300c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc003010( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc003010;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc003014( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc003014;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc003018( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc003018;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc003024( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc003024;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00302c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00302c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006000( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006000;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006004( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006004;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006008( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006008;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00600c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00600c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006010( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006010;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006014( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006014;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006018( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006018;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00601c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00601c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006020( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006020;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006024( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006024;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006400( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006400;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006404( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006404;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006408( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006408;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00640c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00640c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006410( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006410;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006414( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006414;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006418( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006418;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00641c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00641c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006420( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006420;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006424( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006424;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006428( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006428;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00642c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00642c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006430( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006430;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006434( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006434;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006438( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006438;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00643c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00643c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006480( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006480;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006484( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006484;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006488( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006488;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00648c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00648c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006490( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006490;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006494( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006494;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006498( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006498;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00649c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00649c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064a0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064a0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064a4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064a4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064a8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064a8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064ac( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064ac;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064b0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064b0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064b4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064b4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064b8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064b8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064bc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064bc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064c0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064c0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064c4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064c4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064c8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064c8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064cc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064cc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064d0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064d0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064d4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064d4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064d8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064d8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064dc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064dc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064e0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064e0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064e4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064e4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064e8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064e8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064ec( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064ec;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064f0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064f0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064f4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064f4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064f8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064f8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc0064fc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc0064fc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006800( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006800;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006804( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006804;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006808( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006808;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00680c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00680c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006810( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006810;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006814( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006814;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006818( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006818;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00681c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00681c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006820( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006820;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006824( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006824;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006828( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006828;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc00682c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc00682c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006830( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006830;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006834( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006834;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006838( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006838;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006c00( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006c00;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006c04( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006c04;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006c08( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006c08;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cc006c0c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcc006c0c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd000000( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd000000;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd000004( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd000004;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd000008( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd000008;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd000018( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd000018;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd000024( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd000024;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd000030( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd000030;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd000034( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd000034;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd000064( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd000064;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0000c0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0000c0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0000c4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0000c4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0000c8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0000c8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0000e0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0000e0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0000e4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0000e4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0000e8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0000e8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd000180( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd000180;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd000194( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd000194;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0001cc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0001cc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0001d0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0001d0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006000( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006000;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006004( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006004;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006008( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006008;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00600c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00600c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006010( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006010;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006014( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006014;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006018( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006018;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00601c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00601c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006020( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006020;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006024( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006024;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006400( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006400;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006404( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006404;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006408( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006408;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00640c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00640c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006410( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006410;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006414( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006414;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006418( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006418;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00641c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00641c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006420( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006420;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006424( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006424;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006428( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006428;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00642c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00642c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006430( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006430;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006434( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006434;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006438( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006438;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00643c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00643c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006480( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006480;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006484( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006484;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006488( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006488;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00648c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00648c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006490( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006490;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006494( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006494;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006498( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006498;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00649c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00649c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064a0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064a0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064a4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064a4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064a8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064a8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064ac( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064ac;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064b0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064b0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064b4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064b4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064b8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064b8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064bc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064bc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064c0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064c0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064c4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064c4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064c8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064c8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064cc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064cc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064d0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064d0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064d4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064d4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064d8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064d8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064dc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064dc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064e0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064e0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064e4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064e4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064e8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064e8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064ec( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064ec;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064f0( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064f0;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064f4( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064f4;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064f8( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064f8;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd0064fc( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd0064fc;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006800( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006800;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006804( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006804;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006808( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006808;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00680c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00680c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006810( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006810;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006814( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006814;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006818( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006818;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00681c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00681c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006820( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006820;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006824( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006824;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006828( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006828;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd00682c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd00682c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006830( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006830;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006834( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006834;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006838( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006838;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006c00( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006c00;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006c04( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006c04;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006c08( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006c08;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_read32_cd006c0c( interpreter_t *vm){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x5;
        data32[1] = 0xcd006c0c;
        data32[2] = 0;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc003000( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc003000;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc003004( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc003004;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00300c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00300c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc003010( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc003010;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc003014( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc003014;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc003018( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc003018;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc003024( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc003024;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00302c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00302c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006000( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006000;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006004( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006004;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006008( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006008;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00600c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00600c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006010( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006010;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006014( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006014;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006018( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006018;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00601c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00601c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006020( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006020;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006024( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006024;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006400( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006400;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006404( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006404;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006408( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006408;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00640c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00640c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006410( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006410;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006414( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006414;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006418( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006418;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00641c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00641c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006420( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006420;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006424( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006424;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006428( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006428;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00642c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00642c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006430( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006430;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006434( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006434;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006438( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006438;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00643c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00643c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006480( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006480;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006484( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006484;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006488( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006488;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00648c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00648c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006490( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006490;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006494( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006494;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006498( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006498;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00649c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00649c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064a0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064a0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064a4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064a4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064a8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064a8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064ac( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064ac;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064b0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064b0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064b4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064b4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064b8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064b8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064bc( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064bc;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064c0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064c0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064c4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064c4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064c8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064c8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064cc( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064cc;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064d0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064d0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064d4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064d4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064d8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064d8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064dc( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064dc;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064e0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064e0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064e4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064e4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064e8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064e8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064ec( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064ec;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064f0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064f0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064f4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064f4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064f8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064f8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc0064fc( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc0064fc;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006800( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006800;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006804( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006804;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006808( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006808;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00680c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00680c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006810( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006810;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006814( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006814;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006818( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006818;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00681c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00681c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006820( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006820;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006824( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006824;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006828( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006828;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc00682c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc00682c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006830( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006830;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006834( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006834;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006838( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006838;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006c00( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006c00;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006c04( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006c04;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006c08( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006c08;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cc006c0c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcc006c0c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd000000( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd000000;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd000004( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd000004;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd000008( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd000008;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd000018( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd000018;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd000024( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd000024;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd000030( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd000030;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd000034( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd000034;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd000064( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd000064;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0000c0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0000c0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0000c4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0000c4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0000c8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0000c8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0000e0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0000e0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0000e4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0000e4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0000e8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0000e8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd000180( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd000180;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd000194( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd000194;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0001cc( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0001cc;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0001d0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0001d0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006000( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006000;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006004( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006004;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006008( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006008;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00600c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00600c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006010( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006010;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006014( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006014;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006018( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006018;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00601c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00601c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006020( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006020;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006024( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006024;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006400( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006400;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006404( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006404;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006408( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006408;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00640c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00640c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006410( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006410;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006414( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006414;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006418( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006418;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00641c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00641c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006420( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006420;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006424( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006424;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006428( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006428;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00642c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00642c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006430( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006430;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006434( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006434;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006438( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006438;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00643c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00643c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006480( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006480;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006484( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006484;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006488( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006488;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00648c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00648c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006490( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006490;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006494( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006494;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006498( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006498;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00649c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00649c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064a0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064a0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064a4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064a4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064a8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064a8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064ac( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064ac;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064b0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064b0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064b4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064b4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064b8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064b8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064bc( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064bc;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064c0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064c0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064c4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064c4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064c8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064c8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064cc( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064cc;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064d0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064d0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064d4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064d4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064d8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064d8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064dc( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064dc;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064e0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064e0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064e4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064e4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064e8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064e8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064ec( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064ec;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064f0( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064f0;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064f4( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064f4;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064f8( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064f8;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd0064fc( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd0064fc;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006800( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006800;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006804( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006804;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006808( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006808;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00680c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00680c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006810( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006810;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006814( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006814;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006818( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006818;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00681c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00681c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006820( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006820;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006824( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006824;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006828( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006828;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd00682c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd00682c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006830( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006830;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006834( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006834;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006838( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006838;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006c00( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006c00;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006c04( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006c04;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006c08( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006c08;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }

void handler_write32_cd006c0c( interpreter_t *vm, d_u32 *data_u32){
	
    if (vm->user_data->len > 0){
        uint32_t* data32 = (uint32_t*)vm->user_data->data;
        data32[0] = 0x6;
        data32[1] = 0xcd006c0c;
        data32[2] = *data_u32;
        vm->user_data->len = sizeof(uint32_t) * 3;
    }
    }
