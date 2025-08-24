#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;

    printf("Direccion de x: %p Valor: %d\n", (void*) &x, x);
    printf("Direccion de p: %p Valor: %p\n", (void*) &p, (void*) p);
    printf("Valor de lo que apunta p: %d\n", *p);

    // 3)a) x guarda el 42, mientras que p apunta a x. *p no sabria decir que es.
    // 3)b) la direccion de x y su valor; la direccion de p y su valor; nose.
}