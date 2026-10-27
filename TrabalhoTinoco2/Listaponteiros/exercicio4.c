#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    troca(&x, &y);
    printf("A: %d, B: %d\n", x, y);
    return 0;
}