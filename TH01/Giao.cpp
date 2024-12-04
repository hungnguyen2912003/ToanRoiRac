#include <stdio.h>
#define Max 100

void quickSort(int arr[], int left, int right);

int main() {
    int na, nb;
    scanf("%d", &na);
    int a[na];
    for(int i = 0; i < na; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &nb);
    int b[nb];
    for(int i = 0; i < nb; i++) {
        scanf("%d", &b[i]);
    }
    int c[Max];
    int nc = 0;
    for(int i = 0; i < na; i++) {
        for(int j = 0; j < nb; j++) {
            if(a[i] == b[j]) {
                c[nc++] = a[i];
                break;
            }
        }
    }
    if(nc == 0) {
        printf("none");
    }
    else {
        quickSort(c, 0, nc-1);
        printf("%d", c[0]);
        for(int i = 1; i < nc; i++) {
            printf(" %d", c[i]);
        }
    }
    return 0;
}

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    while(i <= j) {
        while(arr[i] < pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if(left < j) {
        quickSort(arr, left, j);
    }
    if(i < right) {
        quickSort(arr, i, right);
    }
}
