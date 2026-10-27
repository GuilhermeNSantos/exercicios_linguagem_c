#include <stdio.h>
#include <math.h>


int volumesfera(int raio){
    return (4.0/3.0) * (3.14 *( raio * raio * raio));
}

int main(){
    printf("O volume da esfera em m eh m3: %d", volumesfera(10));
}