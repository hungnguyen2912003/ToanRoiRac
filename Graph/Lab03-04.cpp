#include <stdio.h>
#define Max 100

//Kiem tra khuyen
/*a11 b22 c33 ...*/
int Check_Khuyen(int mt[][Max], int n){
	for(int i = 0; i < n; i++){
		if(mt[i][i] == 1){
			return 1;
		}
	}
	return 0;
}

//Kiem tra vo huong or co huong
/*
	Doi xung -> Vo huong
	Khong doi xung -> Co huong
*/
int Check_Huong(int mt[][Max], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(mt[i][j] != mt[j][i]){
				return 1;
			}
		}
	}
	return 0;
}

//Tinh bac/ban bac ra-vao cua tung dinh
/*
	Neu do thi vo huong -> bac
	Neu do thi co huong -> ban bac ra - vao
*/
int Degree(int mt[][Max], int n, int dinh){
	int deg = 0;
	for(int i = 0; i < n; i++){
		if(mt[dinh][i] != 0){
			deg += mt[dinh][i];
		}
	}		
	return deg;
}

int Degree_Ra(int mt[][Max], int n, int dinh){
	int deg = 0;
	for(int i = 0; i < n; i++){
		deg += mt[dinh][i];	
	}
	return deg;	
}

int Degree_Vao(int mt[][Max], int n, int dinh){
	int deg = 0;
	for(int i = 0; i < n; i++){
		deg += mt[i][dinh];
	}
	return deg;
}

//Tinh tong ban bac vao + ra
int Sum_Degree(int mt[][Max], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += Degree_Ra(mt, n, i) + Degree_Vao(mt, n, i);
	}
	return sum;
}

//Tinh canh/cung
int Egde_VH(int mt[][Max], int n){
	int egde = 0;
	for(int i = 0; i < n; i++){
		egde += Degree(mt, n, i);
	}
	return egde/2;
}
int Egde_CH(int mt[][Max], int n){
	int egde = 0;
	for(int i = 0; i < n; i++){
		egde += Degree_Ra(mt, n, i);
	}
	return egde;
}

int main(){
	int n;
	scanf("%d", &n);
	int mt[Max][Max];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &mt[i][j]);
		}
	}
	/*------------------------------------*/
	if(Check_Khuyen(mt, n) == 1){
		printf("Do thi co khuyen\n");
	}
	else{
		printf("Do thi khong co khuyen\n");
	}
	/*------------------------------------*/
	if(Check_Huong(mt,n) == 1){
		printf("Do thi co huong\n");
	}
	else{
		printf("Do thi vo huong\n");
	}
	/*------------------------------------*/
	if(Check_Huong(mt, n) == 0){
		for(int i = 0; i < n; i++){
			printf("Dinh: %d\tBac: %d\n", i, Degree(mt, n, i));
		}
	}
	else{
		for(int i = 0; i < n; i++){
			printf("Dinh: %d\tBan bac ra (deg+): %d\tBan bac vao (deg-): %d\n", i, Degree_Ra(mt, n, i), Degree_Vao(mt, n, i));
		}		
	}
	/*------------------------------------*/
	if(Check_Huong(mt, n) == 0){
		printf("Tong bac ban bac vao - ra cua do thi: 0\n");
	}
	else{
	printf("Tong bac ban bac vao - ra cua do thi: %d\n",Sum_Degree(mt, n));
	}
	/*------------------------------------*/
	if(Check_Huong(mt, n) == 0){
		printf("So canh cua do thi: %d", Egde_VH(mt, n));
	}
	else{
		printf("So canh cua do thi: %d", Egde_CH(mt, n));
	}
	return 1;
}
