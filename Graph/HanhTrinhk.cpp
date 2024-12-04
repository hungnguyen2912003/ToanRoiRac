#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int countPaths(int graph[][MAX], int n, int k, int v_i, int v_j) {
    int dp[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= k; j++) {
            dp[i][j] = 0;
        }
    }
    dp[v_i][0] = 1;
    for (int len = 1; len <= k; len++) {
        for (int node = 0; node < n; node++) {
            for (int neighbor = 0; neighbor < n; neighbor++) {
                if (graph[node][neighbor] == 1) {
                    dp[node][len] += dp[neighbor][len - 1];
                }
            }
        }
    }

    return dp[v_j][k];
}

void nhapMang(int a[][MAX], int &n) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

int main() {
    int a[MAX][MAX], n;
    int k, v_i, v_j;
    nhapMang(a, n);
    scanf("%d", &k);
    scanf("%d %d", &v_i, &v_j);

    int numPaths = countPaths(a, n, k, v_i, v_j);
    printf("%d", numPaths);
}
