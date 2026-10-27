#include <stdio.h>
#include "mstring.h"

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    int len = mstrlen(texto);
    if (len > 0 && texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
    }

    printf("\nTamanho: %d\n", mstrlen(texto));
    
    mstrupper(texto);
    printf("Maiusculas: %s\n", texto);

    printf("Vogais: %d\n", mcount_vogais(texto));

    if (meh_palindromo(texto)) {
        printf("E palindromo!\n");
    } else {
        printf("Nao e palindromo.\n");
    }

    return 0;
}