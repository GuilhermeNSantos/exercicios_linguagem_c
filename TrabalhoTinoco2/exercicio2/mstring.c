#include "mstring.h"

// 1. Retorna o tamanho da string
int mstrlen(char s[]) {
    int cont = 0;
    while (s[cont] != '\0') {
        cont++;
    }
    return cont;
}

// 2. Copia a string 'orig' para 'dest'
void mstrcpy(char dest[], char orig[]) {
    int i = 0;
    while (orig[i] != '\0') {
        dest[i] = orig[i];
        i++;
    }
    dest[i] = '\0'; // Fecha a string de destino
}

// 3. Concatena 'orig' no final de 'dest'
void mstrcat(char dest[], char orig[]) {
    int i = 0, j = 0;
    // Encontra o fim da string dest
    while (dest[i] != '\0') {
        i++;
    }
    // Copia os caracteres de orig para o final de dest
    while (orig[j] != '\0') {
        dest[i] = orig[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Fecha a string concatenada
}

// 4. Compara duas strings (<0 se a<b, 0 se igual, >0 se a>b)
int mstrcmp(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return a[i] - b[i];
        }
        i++;
    }
    return a[i] - b[i];
}

// 5. Transforma todos os caracteres em maiúsculas
void mstrupper(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        // Se for letra minúscula (tabela ASCII), converte para maiúscula
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
        i++;
    }
}

// 6. Transforma todos os caracteres em minúsculas
void mstrlower(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        // Se for letra maiúscula, converte para minúscula
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
        i++;
    }
}

// 7. Conta o número de vogais (a, e, i, o, u - maiúsculas e minúsculas)
int mcount_vogais(char s[]) {
    int cont = 0, i = 0;
    while (s[i] != '\0') {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            cont++;
        }
        i++;
    }
    return cont;
}

// 8. Retorna 1 se for palíndromo, 0 se não (ignorando espaços nas pontas)
int meh_palindromo(char s[]) {
    int inicio = 0;
    int fim = mstrlen(s) - 1;

    while (inicio < fim) {
        // Ignora espaços se houverem
        while (inicio < fim && s[inicio] == ' ') inicio++;
        while (inicio < fim && s[fim] == ' ') fim--;

        if (s[inicio] != s[fim]) {
            return 0; // Não é palíndromo
        }
        inicio++;
        fim--;
    }
    return 1; // É palíndromo
}

// 9. Remove espaços em branco da string deslocando os caracteres
void mremove_espacos(char s[]) {
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0'; // Finaliza a string limpa
}