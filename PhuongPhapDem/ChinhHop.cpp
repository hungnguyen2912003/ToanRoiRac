#include <stdio.h>

int giaithua(int n){
	long gt = 1;
	for(int i = 1; i <= n; i++){
		gt *= i;
	}
	return gt;
}

int chinhhop(int n, int k){
	int tuso = 1;
	int mauso = 1;
	if(n < k){
		printf("n phai lon hon hoac bang k");
	}
	else{
		tuso = giaithua(n);
		mauso = giaithua(n - k);
	}
	return tuso/mauso;
}

int main(){
	int n;
	int k;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhap k: ");
	scanf("%d", &k);
	printf("Chinh hop chap %d cua %d phan tu: %d", k, n, chinhhop(n,k));
	return 1;
}
