#include <stdio.h>
#define max 100

int main() {
    int a[max], b[max], c[max];
    int na, nb, nc, i, j;
    scanf("%d", &na);
    for (i = 0; i < na; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &nb);
    for (i = 0; i < nb; i++){
        scanf("%d", &b[i]);
    }
    nc = 0;
    for (i = 0; i < na; i++){
        c[nc++] = a[i];
    }
    for (i = 0; i < nb; i++){
        int flag = 0;
        for (j = 0; j < na; j++){
            if (b[i] == a[j]){
                flag = 1;
                break;
            }
        }
        if (!flag){
            c[nc++] = b[i];
        }
    }
    for(i = 0; i < nc; i++){
        for (j = i + 1; j < nc; j++) {
            if (c[i] > c[j]) {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(i = 0; i < nc; i++){
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}
