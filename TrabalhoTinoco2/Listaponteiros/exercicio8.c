#include <stdio.h>

int main() {
    float v[10];
    for (int i = 0; i < 10; i++) {
        printf("Endereço [%d]: %p\n", i, &v[i]);
    }
    return 0;
}