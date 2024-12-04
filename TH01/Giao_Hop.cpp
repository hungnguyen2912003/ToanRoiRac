#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j;
    scanf("%d", &n);
    int *A = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &m);
    int *B = (int*) malloc(m * sizeof(int));
    for (i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    int *C = (int*) malloc((n + m) * sizeof(int));
    int count = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                C[count++] = A[i];
                break;
            }
        }
    }
    if (count == 0) {
        printf("none\n");
    } else {
        for (i = 0; i < count; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }
    int *D = (int*) malloc((n + m) * sizeof(int));
    count = 0;
    for (i = 0; i < n; i++) {
        D[count++] = A[i];
    }
    for (i = 0; i < m; i++) {
        int found = 0;
        for (j = 0; j < n; j++) {
            if (B[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            D[count++] = B[i];
        }
    }
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (D[i] > D[j]) {
                int temp = D[i];
                D[i] = D[j];
                D[j] = temp;
            }
        }
    }
    for (i = 0; i < count; i++) {
        printf("%d ", D[i]);
    }
    return 0;
}
