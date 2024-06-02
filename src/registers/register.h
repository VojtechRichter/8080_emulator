#include <inttypes.h>

#define REG_COUNT 10
#define STACK_SIZE 256 * 256

#define persistent static
#define internal static

typedef enum RegisterName RegisterName;
enum RegisterName {
    A,
    F,
    B,
    C,
    D,
    E,
    H,
    L,

    PSW,
    BC,
    DE,
    HL,

    SP,
    PC
};

typedef struct Register Register;
struct Register {
    RegisterName register_name;
    uint8_t size;
    int16_t data;
};

Register * regset_default_init();