#include <stdio.h>
#include "operacoes.h"

int main(){
    int x,y, resultado;
    char operacao_escolhida;
    printf("Qual operacao voce quer: '+' soma '-' subtração '*' multiplicacao '/' para divisao \n");
    scanf("%c", &operacao_escolhida);
    printf("Quais os dois numeros para realizar a operacao:\n ");
    scanf("%d %d", &x,&y);

    if(operacao_escolhida == '+'){
        resultado = soma(x,y);
        printf("%d", resultado);
    }

    if(operacao_escolhida == '-'){
        resultado = subtrai(x,y);
        printf("%d", resultado);
    }

    if(operacao_escolhida == '*'){
        resultado = multiplica(x,y);
        printf("%d", resultado);
    }

    if(operacao_escolhida == '/'){
        resultado = divide(x,y);
        printf("%d", resultado);
    }

    return 0;
}