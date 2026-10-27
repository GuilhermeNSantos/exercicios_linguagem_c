#include <stdio.h>

int  CelsiustoFahrenheit(int Celsius){
    int fah = Celsius * (9.0/5.0) + 32;
    return fah;
}

int main(){
    int cel;
    printf("Digite pra a temperatura em Celsius: ");
    scanf("%d", &cel);
    printf("%dF",CelsiustoFahrenheit(cel));
}