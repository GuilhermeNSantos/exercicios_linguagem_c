#include <stdio.h>

int main() {
    int inteiro = 12;
    float real = 37.3;
    char caracter = 'A';

    int *pint = &inteiro;
    float *preal = &real;
    char *pcaracter = &caracter;

    printf("Antes: %d | %.1f | %c\n\n", *pint, *preal, *pcaracter);

    *pint = 100;
    *preal = 55.5;
    *pcaracter = 'Z';

    printf("Apos modificacao:\n");
    printf("Endereço: %p | Valor: %d\n", pint, *pint);
    printf("Endereço: %p | Valor: %.1f\n", preal, *preal);
    printf("Endereço: %p | Valor: %c\n", pcaracter, *pcaracter);

    return 0;
}