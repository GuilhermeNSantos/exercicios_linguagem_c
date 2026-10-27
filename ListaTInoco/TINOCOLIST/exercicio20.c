#include <stdio.h>

int primo(int x){
    int quantidade = 0, calc = 0, cont = 0;

    for(int i = x - 1; i > 0; i--){
        for(int j = i; j > 0; j--){
            if(i % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            quantidade++;
        }
        cont = 0;
    }
    return quantidade;
}

int main(){
    printf("%d", primo(6));
}