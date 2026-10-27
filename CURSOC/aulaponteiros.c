#include <stdio.h>

int main(){


    // int idade = 30;
    // char sexo = 'f';
    // double dupla = 404;
    // float n1 = 4.4;
    
    // printf("\n\t Endereco de memoria: %p\n\tIdade: %d\t\n",&idade, idade);
    // printf("\n\t Endereco de memoria: %p\n\tSexo: %c\t\n",&sexo, sexo);  

    // int *pi = &idade;
    // printf("\n\tEndereço de memória do ponteiro: %p\n\t valor guardado do ponteiro que eh um endereço de memoria: %p\n",&pi,pi);
    // printf("\tValor apontado por ele: %d\n\n", *pi);

    // char *ps = &sexo;
    // printf("O endereço de memoria do do ponteiro char: %p\n\t O valor guardado no ponteiro: %p\n\t",&ps,ps);
    // printf("\nO valor apontado pra ele eh %c\n\t",*ps);

    // printf("tamanho int : %d\n",(int)sizeof idade);
    // printf("tamanho char :%d \n",(int)sizeof sexo);
    // printf("tamanho double : %d \n", (int)sizeof dupla);
    // printf("tamanho float : %.0f \n", (float)sizeof n1);
    char frase[100];
    printf("Digite uma frase: ");
    scanf("%99[^\n]", frase);
    printf("\nA frase digitada foi: %s\n", frase);
    return 0;
}