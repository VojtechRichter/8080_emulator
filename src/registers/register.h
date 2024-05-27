#include <inttypes.h>

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
    uint16_t size;
};