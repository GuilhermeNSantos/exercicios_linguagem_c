#include <stdio.h>

void organiza(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    organiza(&x, &y);
    printf("Maior: %d | Menor: %d\n", x, y);
    return 0;
}