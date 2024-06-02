#include "registers/register.h"

#include <stdio.h>

int main(void)
{
    Register * reg_set = regset_default_init();
    
    for (uint8_t i = 0; i < REG_COUNT; i++) {
        printf("%d\n", reg_set[i].register_name);
    }

    return 0;
}