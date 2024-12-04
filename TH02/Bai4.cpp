#include <stdio.h>
#include <math.h>

int main() {
    double n, M;
    scanf("%lf %lf", &n, &M);

    double A1 = M * pow(1 + 0.046/4, 4 * n);
    double A2 = M * pow(1 + 0.056/2, 2 * n);
    double A3 = M * pow(1 + 0.066, n);
    double A4 = M * pow(1 + 0.076, n);

    double result = A1 + A2 + A3;
    if (n >= 1) {
        result += A4;
    }

    printf("%.6lf", result);
    return 0;
}
