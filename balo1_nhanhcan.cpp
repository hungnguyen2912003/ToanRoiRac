#include <stdio.h>

int w[] = {3, 4, 5, 7, 6, 9};
int v[] = {7, 10, 20, 19, 13, 40};
int n = sizeof(w) / sizeof(w[0]);
int Wmax = 19;

int sum_w = 0;
int sum_v = 0;
int nc[100];
int nc2[100];

void nhanhcan(){
	int wt = 0;
	int vt = 0;
	for(int k = 0; k <= n; k++){
		if(nc2[k] == 1){
			wt = wt + w[k];
			vt = vt + v[k];
		}
		if(wt <= Wmax){
			if(vt > sum_v){
				sum_v = vt;
				sum_w = wt;
				for(int k = 0; k <= n; k++){
					nc[k] = nc2[k];
				}
			}
		}
	}
}

void Print(){
	if(sum_v > 0)
		for(int k = 0; k <= n; k++)
			if(nc[k] == 1)
				printf("Do vat %d voi Trong luong %d - Gia tri %d\n", k + 1, w[k], v[k]);
	printf("Tong trong luong: %d\n", sum_w);
	printf("Tong gia tri: %d\n", sum_v);
}

void Balo_DQ(int i, int t){
    int j;
    for(j = 0; j <= 1; j++){
        nc2[i] = j;
        if(j == 1)
            t = t + w[i];
        if(i < n - 2 && t <= Wmax){
            Balo_DQ(i + 1, t);
        }
        else{
            nhanhcan();
            if(j == 1)
                t = t - w[i];
            nc2[i] = 0;
        }
    }
}

int main(){
	Balo_DQ(0, sum_v);
	Print();
	return 0;
}
