#include <stdio.h>

int calculadora(int x, int y, char z){
    if(z == '+'){
        return x + y;
    }

    if(z == '-'){
        return x - y;
    }

    if(z == '*'){
        return x * y;
    }

    if(z == '/'){
        return x / y;
    }
}

int main(){
    printf("\n%d",calculadora(10,5,'+'));
    printf("\n%d",calculadora(10,5,'-'));
    printf("\n%d",calculadora(10,5,'*'));
    printf("\n%d",calculadora(10,5,'/'));

}