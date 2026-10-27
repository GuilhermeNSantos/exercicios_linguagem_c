#include <stdio.h>
#define PI 3.14159265

void calc_esfera(float R, float *area, float *volume) {
    *area = 4.0 * PI * (R * R);
    *volume = (4.0 / 3.0) * PI * (R * R * R);
}

int main() {
    float r, a, v;
    scanf("%f", &r);
    calc_esfera(r, &a, &v);
    printf("Área: %.2f | Volume: %.2f\n", a, v);
    return 0;
}