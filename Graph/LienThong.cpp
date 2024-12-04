#include <stdio.h>
#define Max 100

/*Lien thong -> moi dinh: bac >= n/2 */

int Degree(int mt[][Max], int n, int dinh){
	int deg = 0;
	for(int i = 0; i < n; i++){
		if(mt[dinh][i] != 0){
			deg += mt[dinh][i];
		}
	}		
	return deg;
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
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(Degree(mt, n, i) >= n/2)
			flag = 1;
	}
	if(flag == 1){
		printf("lien thong");
	}
	else{
		printf("khong lien thong");
	}
	return 1;
}
