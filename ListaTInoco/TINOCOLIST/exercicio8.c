#include <stdio.h>
#include <math.h>

int hipotenusa(int a, int b){
    a = a * a;
    b = b * b;
    int hipotenusa = sqrt(a + b);
    return hipotenusa;
}

int main(){
    printf("%d",hipotenusa(3,4));
}
