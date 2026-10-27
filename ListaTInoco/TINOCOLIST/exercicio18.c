#include <stdio.h>

int potenciacao(int x, int z){
    int pot = 1;
    for(int i = 0; i < z; i++){
        pot = pot * x;
    }
    return pot;
}

int main(){

    printf("%d", potenciacao(2,3));

    return 0;
}