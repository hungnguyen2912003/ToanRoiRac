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
	printf("Giao cua A va B la: ");
	for(int i = 0; i < m; i++){
		int flag = 0;
		for(int j = 0; j < n; j++){
			if(a[i] == b[j]){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			printf("%d ", a[i]);
		}
	}
	return 1;
}
