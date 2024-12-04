#include <stdio.h>

int main(){
	int m, n;
	int a[100], b[100];
	printf("Nhap so luong phan tu cua tap hop A: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("Nhap so luong phan tu cua tap hop B: ");
	scanf("%d", &m);
	for(int i = 0; i < m; i++){
		printf("B[%d] = ", i);
		scanf("%d", &b[i]);
	}
	printf("Hieu cua A va B: ");
	for(int i = 0; i < n; i++){
		int flat = 0;
		for(int j = 0; j < m; j++){
			if(a[i] == b[j]){
				flat = 1;
				break;
			}
		}
		if(flat == 0){
			printf("%d ", a[i]);
		}
	}
	return 1;
}
