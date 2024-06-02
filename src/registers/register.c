#include "register.h"

Register * regset_default_init()
{
    persistent Register reg_set[REG_COUNT] = {0};

    reg_set[0] = (Register) { .register_name = A, .size = 8, .data = 0x00 };
    reg_set[1] = (Register) { .register_name = B, .size = 8, .data = 0x00 };
    reg_set[2] = (Register) { .register_name = C, .size = 8, .data = 0x00 };
    reg_set[3] = (Register) { .register_name = D, .size = 8, .data = 0x00 };
    reg_set[4] = (Register) { .register_name = E, .size = 8, .data = 0x00 };
    reg_set[5] = (Register) { .register_name = E, .size = 8, .data = 0x00 };
    reg_set[6] = (Register) { .register_name = H, .size = 8, .data = 0x00 };
    reg_set[7] = (Register) { .register_name = L, .size = 8, .data = 0x00 };

    reg_set[8] = (Register) { .register_name = SP, .size = 16, .data = (STACK_SIZE - 1) };
    reg_set[9] = (Register) { .register_name = PC, .size = 16, .data = 0x0000 };

    return reg_set;
}