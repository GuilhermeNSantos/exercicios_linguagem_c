#include <stdio.h>

void soma(int *a, int *b) {
    *a = *a + *b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    soma(&a, &b);
    printf("A: %d | B: %d\n", a, b);
    return 0;
}