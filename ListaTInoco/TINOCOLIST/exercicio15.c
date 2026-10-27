#include <stdio.h>

int triangulo(int a,int b,int c){
    if((a + b) > c && (a + c) > b && (b + c) > a){
        printf("Eh triangulo");
        if(a == b && b == c){
            printf("Equilátero");
        }

        else if((a == c) || (b == c) || (a == b)){
            printf("Isosceles");
        }
        else{
            printf("Escaleno");
        }
    }
    else{
        printf("Nah eh triangulo");
    }

    return 0;
}