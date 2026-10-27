#include <stdio.h>

int dobro(int n1);

int main(){
    int numero;
    printf("Qual o numero: ");
    scanf("%d",&numero);
    printf("retorno :  %d", dobro(numero));
    return 0;
}

int dobro(int n1){
    return n1 * 2;
}