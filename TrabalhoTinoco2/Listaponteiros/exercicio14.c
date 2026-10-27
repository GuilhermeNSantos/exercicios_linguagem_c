#include <stdio.h>

void ler_notas(float *n1, float *n2) {
    scanf("%f %f", n1, n2);
}

void calcular_medias(float n1, float n2, float *simples, float *ponderada) {
    *simples = (n1 + n2) / 2.0;
    *ponderada = (n1 + (n2 * 2.0)) / 3.0;
}


int main() {
    float n1, n2, simples, ponderada;
    ler_notas(&n1, &n2);
    calcular_medias(n1, n2, &simples, &ponderada);
    printf("Média Simples: %.2f | Média Ponderada: %.2f\n", simples, ponderada);
    return 0;
}