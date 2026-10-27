#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int *pn1 = &n1;
    int *pn2 = &n2;

    if (pn1 > pn2)
        printf("Conteúdo do maior endereço: %d\n", *pn1);
    else
        printf("Conteúdo do maior endereço: %d\n", *pn2);

    return 0;
}