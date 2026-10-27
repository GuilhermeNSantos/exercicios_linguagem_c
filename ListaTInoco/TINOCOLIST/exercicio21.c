#include <stdio.h>

int linhas_exclamacao(int x){
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < i; j++){
            printf("!");
        }
        printf("\n");
    }
    return 0;
}

int main(){
    linhas_exclamacao(5);
    return 0;
}