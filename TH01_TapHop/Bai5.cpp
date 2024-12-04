#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	printf("Nhap he so a: ");
	scanf("%f", &a);
	printf("Nhap he so b: ");
	scanf("%f", &b);
	printf("Nhap he so c: ");
	scanf("%f", &c);
	float delta = b*b - 4*a*c;
	float x1, x2;
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
	if(delta == 0){
		printf("Phuong trinh co dang: f(x) = %.1fx^2 + %.1fx + %.1f\n", a, b, c);
		printf("Phuong trinh co nghiem kep: x1 = x2 = %.1f\n", x1);
		printf("f toan anh");	
	}
	else if(delta < 0){
		printf("Phuong trinh co dang: f(x) = %.1fx^2 + %.1fx + %.1f\n", a, b, c);
		printf("Phuong trinh vo nghiem!\n");
		printf("f khong toan anh");
	}
	else{
		if(a == 0){
			printf("Phuong trinh co dang: f(x) = %.1fx + %.1f\n", b, c);
			printf("Phuong trinh co nghiem: x = %.1f\n", -c/b);
			printf("f toan anh");
		}
		else{
			printf("Phuong trinh co dang: f(x) = %.1fx^2 + %.1fx + %.1f\n", a, b, c);
			printf("Phuong trinh co 2 nghiem: x1 = %.1f va x2 = %.1f\n", x1, x2);
			printf("f toan anh");
		}		
	}
	return 1;
}
