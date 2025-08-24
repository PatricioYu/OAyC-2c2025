#include <stdio.h>
#include "../include/ej1.h"

int main() {
    monstruo_t m = {"pepe", 1, 2, 3};

    mostrarMonstruos(&m);
}

void mostrarMonstruos(monstruo_t* monstruos) {
    printf("nombre: %s \nvida: %d\n", monstruos->nombre, monstruos->vida);
}