#include <stdio.h>
#define Max 100

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

int main(){
	int n;
	scanf("%d", &n);
	int mt[Max][Max];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &mt[i][j]);
		}
	}
	if(Check_Huong(mt,n) == 1){
		printf("co_huong\n");
	}
	else{
		printf("vo_huong\n");
	}
}
