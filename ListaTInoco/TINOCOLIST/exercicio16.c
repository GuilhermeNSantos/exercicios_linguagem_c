#include <stdio.h>


int desenhe_linha(int x){
    for(int i = 0; i < x;i++){
        printf("=");
    }
    printf("\n");

    return 0;
}

int main(){
    desenhe_linha(3);
}