#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t *x = (uint8_t*) 0xF0;
    int8_t *y = (int8_t*) 0xF6;

    printf("Dir de x: %p Valor: %d\n", (void*) x, *x);
    printf("Dir de y: %p Valor: %d\n", (void*) y, *y);

    // tira segmentation error porque es memoria que pertenece a una region "protegida"

    return 0;
}