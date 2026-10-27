    #include <stdio.h>
    #include <math.h>

    int quadrado(int n1){
        int x = sqrt(n1);
        if (x * x == n1){
            return 1;
        }
        else{
            return 0;
        }
    }

    int main(){
        int numero;
        printf("Qual o numero: ");
        scanf("%d", &numero);
        if(quadrado(numero) == 1){
            printf("e quadrado perfeito");
        }
        else{
            printf("nao eh quadrado perfeito");
        }

        return 0;
    }