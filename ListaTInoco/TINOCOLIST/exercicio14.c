#include <stdio.h>

int consumo(int dist, int litro){
    int consumo = dist / litro;

    if(consumo < 8){
        printf("Venda o carro!\n");
    }

    if(consumo >= 8 && consumo <= 14){
        printf("Economico!\n");
    }

    if(consumo > 14){
        printf("Super economico!\n");
    }

    return 0; 
}

int main(){

    
    consumo(100, 10);

    return 0;
}