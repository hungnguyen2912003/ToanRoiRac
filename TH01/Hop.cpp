#include <stdio.h>
#define max 100

int main() {
    int na, nb;
    scanf("%d", &na);
    int a[na];
    for (int i = 0; i < na; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &nb);
    int b[nb];
    for (int i = 0; i < nb; i++) {
        scanf("%d", &b[i]);
    }
    int nc = na + nb;
    int c[nc];
    int i = 0, j = 0, k = 0;
    while (i < na && j < nb) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else if (a[i] > b[j]) {
            c[k++] = b[j++];
        } else {
            c[k++] = a[i++];
            j++;
        }
    }
    while (i < na) {
        c[k++] = a[i++];
    }
    while (j < nb) {
        c[k++] = b[j++];
    }
    for (int i = 0; i < k; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", c[i]);
    }
    return 0;
}
