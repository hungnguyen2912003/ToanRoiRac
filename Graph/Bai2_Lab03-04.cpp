#include <stdio.h>

#define MAX_VERTICES 100

int main() {
    int num_vertices, num_edges, i, j, k;
    int adj_matrix[MAX_VERTICES][MAX_VERTICES] = {0};

    printf("Nhap so dinh cua do thi: ");
    scanf("%d", &num_vertices);

    printf("Nhap so canh cua do thi: ");
    scanf("%d", &num_edges);

    printf("Nhap cac canh cua do thi:\n");
    for (k = 0; k < num_edges; k++) {
        printf("Canh thu %d: ", k+1);
        scanf("%d %d", &i, &j);
        adj_matrix[i-1][k] = 1;
        adj_matrix[j-1][k] = 1;
    }

    printf("Ma tran lien thuoc dinh-canh cua do thi:\n");
    for (i = 0; i < num_vertices; i++) {
        for (j = 0; j < num_edges; j++) {
            printf("%d ", adj_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
