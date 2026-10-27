#include <stdio.h>
#include "conversor.h"

int main() {
    int opcao;
    float temperatura, resultado;

    do {
        printf("\n--- Conversor de Temperaturas ---\n");
        printf("1 - Converter Celsius -> Fahrenheit\n");
        printf("2 - Converter Fahrenheit -> Celsius\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2) {
            printf("Digite o valor da temperatura: ");
            scanf("%f", &temperatura);

            if (opcao == 1) {
                resultado = celsius_fahrenheit(temperatura);
                printf("Resultado: %.2f °F\n", resultado);
            } else {
                resultado = fahrenheit_celsius(temperatura);
                printf("Resultado: %.2f °C\n", resultado);
            }
        } else if (opcao != 0) {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("A sair do programa...\n");
    return 0;
}