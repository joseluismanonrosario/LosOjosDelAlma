#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");  
    scanf("%d", &b);
    printf("La suma de %d y %d es: %d\n", a, b, a + b);
    return 0;
}