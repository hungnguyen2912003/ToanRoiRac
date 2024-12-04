#include <stdio.h>
#include <gmp.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    mpz_t factorial;
    mpz_init(factorial);
    mpz_set_ui(factorial, 1);

    if (n < 0) {
        printf("Giai thua cua so n la so nguyen khong am!");
    } else {
        for (int i = 2; i <= n; i++) {
            mpz_mul_ui(factorial, factorial, i);
        }
        gmp_printf("Giai thua cua %d: %d! = %Zd\n", n, n, factorial);
    }

    mpz_clear(factorial);

    return 0;
}
