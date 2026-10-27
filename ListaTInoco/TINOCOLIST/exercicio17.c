#include <stdio.h>

int somanumeros(int x, int y){
    int menor = 0, maior = 0, soma = 0;
    if ( x > y){
        menor = y;
        maior = x;
    }
    else{
        menor = x;
        maior = y;
    }

    for(int i = menor + 1 ; i < maior; i++){
        soma += i;
    }

    return soma;
}

int main(){
   int resultado = somanumeros(8,3);
   printf("%d", resultado);
}