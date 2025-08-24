#ifndef EJ1_H
#define EJ1_H

#include <stdio.h>

typedef struct {
    char* nombre;
    int vida;
    double ataque;
    double defensa;
} monstruo_t;

void mostrarMonstruos(monstruo_t* monstruos);

#endif