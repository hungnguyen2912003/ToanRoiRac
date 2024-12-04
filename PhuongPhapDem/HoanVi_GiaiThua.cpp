#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	long gt = 1;
	if(n < 0){
		printf("Giai thua cua so n la so nguyen khong am!");
	}
	else{
		for(int i = 1; i <= n; i++){
			gt = gt * i;
		}
		printf("Giai thua cua %d: %d! = %ld", n, n, gt);	
	}
}
