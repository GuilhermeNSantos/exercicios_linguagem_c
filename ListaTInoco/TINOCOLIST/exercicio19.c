#include <stdio.h>

int fatorial(int x){
    int soma = 1;
    for(int i = x; i > 0; i--){
        soma *= i;
    }
    return soma;
}

int main(){
    printf("%d", fatorial(3));
}