#include <stdio.h>

int main() {
    int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
    102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
    103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
    111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};
    
    // se usa size_t porque soporta el maximo tamaño teoricamente posible de un objeto de cualquier tipo?
    // a que se refiere con que tuviera un tamaño distinto? el array en si o a los elementos?
    printf("longitud del mensaje secreto: %zu \n" ,sizeof(mensaje_secreto));
    printf("longitud de un entero: %zu \n", sizeof(int));

    // se calcula la cantidad de letras con length
    size_t length = sizeof(mensaje_secreto) / sizeof(int);
    
    char decoded[length];
    
    for (int i = 0; i < length; i++) {
        decoded[i] = (char) (mensaje_secreto[i]); // casting de int a char
    }

    for (int i = 0; i < length; i++) {
        printf("%c", decoded[i]);
    }

    return 0;
}