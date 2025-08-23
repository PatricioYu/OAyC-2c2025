#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t int8 = 15;
    int16_t int16 = 255;
    int32_t int32 = 1234567890;
    int64_t int64 = 123456789123456789;

    printf("int8(%zu): %d \n", sizeof(int8), int8);
    printf("int16(%zu): %d \n", sizeof(int16), int16);
    printf("int32(%zu): %d \n", sizeof(int32), int32);
    printf("int64(%zu): %ld \n", sizeof(int64), int64);

    return 0;
}