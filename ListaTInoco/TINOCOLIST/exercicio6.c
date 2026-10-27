#include <stdio.h>

int converte(int h, int m, int s){
    return (h * 3600) + (m * 60) + s;
}

int main(){

    printf("A quantidade de segundos de dois horarios de aula: %d ",converte(1,40,60));

    return 0;
}