#include <stdio.h>

int somaalgarismo(int a) {
    
    if (a <= 0) {
        printf("Número inválido\n");
        return 0;
    }

    int soma = 0;

    
    while (a > 0) {
        soma = soma + (a % 10);
        a = a / 10;              
    }

    return soma;
}

int main() {
    printf("%d", somaalgarismo(251)); 
    return 0;
}