#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    if (A == 0) return 0;
    float delta = (B * B) - (4 * A * C);
    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *X1 = -B / (2 * A);
        return 1;
    } else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}

int main() {
    float a, b, c, x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    int qtd = raizes(a, b, c, &x1, &x2);
    if (qtd == 0) printf("Sem raízes reais\n");
    else if (qtd == 1) printf("Uma raiz: %.2f\n", x1);
    else printf("Duas raízes: %.2f e %.2f\n", x1, x2);
    return 0;
}