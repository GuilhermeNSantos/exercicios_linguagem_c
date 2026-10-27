#include <stdio.h>

int main() {
    int a = 5, b = 10;
    
    if (&a > &b)
        printf("Maior endereço: %p\n", &a);
    else
        printf("Maior endereço: %p\n", &b);

    return 0;
}