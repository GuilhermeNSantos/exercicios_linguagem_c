#include <stdio.h>

int sinalizador(int n1);


int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("%d",sinalizador(numero));
    return 0;
}

int sinalizador(int n1){
    if(n1 > 0){
        return 1;
    }

    if(n1 < 0){
        return -1;
    }

    if(n1 == 0){
        return 0;
    }
}