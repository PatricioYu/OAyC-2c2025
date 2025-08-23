#include <stdio.h>

int main () {
    // 0101, 0011, 0010, 0001
    int a = 5; int b = 3; int c = 2; int d = 1;

    printf("a: %d, b: %d, c: %d, d: %d \n", a,b,c,d);
    printf("a + b * c / d: %d \n", a + b * c / d);
    printf("a %% b: %d \n", a % b);
    printf("a == b: %d \n", a == b);
    printf("a != b: %d \n", a != b);
    printf("a & b: %x \n", a & b);
    printf("a | b: %x \n", a | b);
    printf("~a: %x \n", ~a);
    printf("a && b: %d \n", a && b);

    return 0;
}