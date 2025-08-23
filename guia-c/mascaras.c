#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t a = 0xBBCD1234;
    uint32_t b = 0xA234ABCD;
    uint32_t mask = 0xE0000000;

    printf("resultado: %d \n", (a & mask) == (b & mask));

    return 0;
}