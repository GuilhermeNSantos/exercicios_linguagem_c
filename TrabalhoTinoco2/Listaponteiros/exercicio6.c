#include <stdio.h>

int calcula(int *a, int *b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int soma = calcula(&a, &b);
    printf("Soma: %d | A: %d | B: %d\n", soma, a, b);
    return 0;
}

int calcula(int *a, int *b) {
    *a *= 2;
    *b *= 2;
    return *a + *b;
}