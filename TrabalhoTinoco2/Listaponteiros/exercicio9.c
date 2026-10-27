#include <stdio.h>

int main() {
    float m[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereço [%d][%d]: %p\n", i, j, &m[i][j]);
        }
    }
    return 0;
}