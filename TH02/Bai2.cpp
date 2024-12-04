#include <stdio.h>
int main() {
    unsigned long long n, f0 = 0, f1 = 1, fn, i;
    scanf("%llu", &n);
    if (n == 0 || n == 1){
        return 0;
    }
    for (i = 2; i <= n; i++){
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    printf("%llu", fn);
    return 0;
}
