#include <stdio.h>

int main() {
    float f = 0.1f;
    double d = 0.1;

    printf("float: %.20f \n", f);
    printf("double: %.20f \n", d);

    printf("entero: %d \n", (int) f);
    printf("entero: %d \n", (int) d);

    return 0;
}