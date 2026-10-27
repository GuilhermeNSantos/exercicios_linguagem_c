#include <stdio.h>

int media(int n1, int n2, int n3, char x){
    if(x == 'A'){
        int media = (n1+n2+n2) / 3;
        return media;
    }

    if(x == 'P'){
        int media = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
        return media;
    }
}

int main(){
    printf("\n%d", media(10,10,10,'A'));
    printf("\n%d", media(8,10,10,'P'));
}