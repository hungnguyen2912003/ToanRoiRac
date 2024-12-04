#include <stdio.h>

int W[] = {0, 3, 4, 5, 7, 6, 9};
int V[] = {0, 7, 10, 20, 19, 13, 40};
int Pmax = 19;
int n = sizeof(W) / sizeof(W[0]) - 1;
int F[100][100];

int main(){
    int i, j, k;
    for (j = 1; j <= Pmax; j++){
        F[0][j] = 0;
    }
    for (i = 1; i <= n; i++){
        F[i][0] = 0;
    }

    for (i = 1; i <= n; i++){
        for (j = 1; j <= Pmax; j++){
            F[i][j] = F[i - 1][j];
            if (((F[i - 1][j - W[i]] + V[i]) > F[i][j]) && (j >= W[i])) {
                F[i][j] = F[i - 1][j - W[i]] + V[i];
            }
        }
    }
    printf("Gia tri lon nhat la: %d\n", F[n][Pmax]);
    printf("Cac vat lay duoc la: \n");
    j = Pmax;
    for (k = n; k > 0; k--){
        if (F[k][j] != F[k - 1][j]){
            printf("Vat %d co trong luong %d, gia tri %d\n", k, W[k], V[k]);
            j = j - W[k];
        }
    }
    return 0;
}
