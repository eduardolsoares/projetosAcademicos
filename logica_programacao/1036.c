#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, r1, r2;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Impossivel calcular\n");
        return 0;
    }

    delta = (b * b) - 4 * a * c;

    // Verificar se delta é negativo
    if (delta < 0) {
        printf("Impossivel calcular\n");
        return 0;
    }

    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);

    printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);

    return 0;
}