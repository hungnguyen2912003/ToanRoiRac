#include <stdio.h>

int tong_buoc = 0;

void towerofHanoi(int n, char cotnguon, char cottg, char cotdich){
	if(n == 0){
		return;
	}
	towerofHanoi(n - 1, cotnguon, cotdich, cottg);
	printf("Di chuyen dia %d tu %c sang %c\n", n, cotnguon, cotdich);
	tong_buoc++;
	towerofHanoi(n - 1, cottg, cotnguon, cotdich);
}

int main(){
	int n;
	printf("Nhap so dia: ");
	scanf("%d", &n);
	towerofHanoi(n, 'A', 'B', 'C');
	printf("Tong so buoc thuc hien: %d", tong_buoc);
	return 0;
}
