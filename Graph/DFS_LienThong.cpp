#include<stdio.h>
int mt[100][100];
int n;
int mt2[100];
int count = 1;

void DFS(int i){
	mt2[i]=1;
	for(int j = 0; j < n; j++){
		if(mt[i][j]!=0 && mt2[j]==0){
			count++;
			DFS(j);
		}
	}
}


int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &mt[i][j]);
		}
	}
	for(int i=0;i<n;i++) 
		mt2[i]=0; 
	DFS(0);
	if(count==n)
		printf("lien thong");
	else 
		printf("khong lien thong");
}
