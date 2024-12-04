#include <Stdio.h>
#include <math.h>
#define Max 100
int CheckHuong(int mt[][Max], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(mt[i][j] != mt[j][i])
				return 1;
		}
	}
	return 0;
}

int Egde(int mt[][Max], int n){
	if(CheckHuong(mt, n) == 1){
		int deg = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				deg += mt[i][j];
		return deg;
	}
	else{
		int deg = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				deg += mt[i][j];
			}
		}
		return round((float)deg/2.0);
	}
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
	printf("%d", Egde(mt, n));
}
