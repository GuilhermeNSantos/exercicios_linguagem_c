#include <stdio.h>

int triangulo(int n){
    
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    
    for(int i = n - 1; i >= 1; i--){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int main(){
    triangulo(4);

    return 0;
}