#include <stdio.h>
#include <limits.h>
#define Max 9999999

long n;
long a[Max];
long C[Max];
int k;
long T[Max];

void Truyvet(int j){
    if (j > 0) {
        int count = 0;
        long menhgia = T[j];
        while (j > 0 && T[j] == menhgia) {
            count++;
            j -= menhgia;
        }
        printf("Menh gia %ld: %d to\n", menhgia, count);
        Truyvet(j);
    }
}

void Quyhoachdong(){
    C[0] = 0;
    for (int t = 1; t <= n; t++){
        T[t] = 0;
        C[t] = INT_MAX;
    }
    for(int j = 1; j <= n; j++){
        for(int t = 1; t <= k; t++){
            if((j >= a[t]) && (1 + C[j - a[t]] < C[j])){
                C[j] = 1 + C[j - a[t]];
                T[j] = a[t];
            }
        }
    }
}

int main() {
    printf("Nhap gia tri tien can rut: ");
    scanf("%ld", &n);

    printf("Nhap so luong menh gia tien: ");
    scanf("%d", &k);

    printf("Nhap %d loai menh gia tien:\n", k);
    for(int t = 1; t <= k; t++){
    	printf("Menh gia thu %d: ", t);
        scanf("%ld", &a[t]);
    }
    Quyhoachdong();
    printf("So to tien it nhat de tra so tien: %ld to\n", C[n]);
    printf("So luong cu the cua tung loai menh gia\n");
    Truyvet(n);
    return 0;
}
