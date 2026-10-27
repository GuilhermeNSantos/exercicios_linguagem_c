#include <stdio.h>

int imprimirDataPorExtenso(int dia, int mes, int ano) {
    printf("%d de ", dia);
    switch (mes) {
        case 1:  printf("janeiro"); break;
        case 2:  printf("fevereiro"); break;
        case 3:  printf("março"); break;
        case 4:  printf("abril"); break;
        case 5:  printf("maio"); break;
        case 6:  printf("junho"); break;
        case 7:  printf("julho"); break;
        case 8:  printf("agosto"); break;
        case 9:  printf("setembro"); break;
        case 10: printf("outubro"); break;
        case 11: printf("novembro"); break;
        case 12: printf("dezembro"); break;
        default: 
            printf("\nMês inválido\n");
            return 1; 
    }

    printf(" de %d\n", ano);

    return 0; 
}

int main() {
    
    imprimirDataPorExtenso(18, 11, 2022);

    return 0;
}