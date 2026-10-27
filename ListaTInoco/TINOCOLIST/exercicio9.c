#include <stdio.h>
#include <math.h>

int volumecilindro(int altura, int raio){
    int volume = 3.141592 * (raio * raio) * altura;
    return volume;
}

int main(){
    printf("%d", volumecilindro(10,3));
}