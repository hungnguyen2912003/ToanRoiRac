#include <stdio.h>
#define Max 100

int Check_Huong(int mt[][Max], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mt[i][j] != mt[j][i]) {
                return 1;
            }
        }
    }
    return 0;
}

int Degree(int mt[][Max], int n, int dinh) {
    int deg = 0;
    for (int i = 0; i < n; i++) {
        deg += mt[dinh][i];
    }
    return deg;
}

int Degree_Ra(int mt[][Max], int n, int dinh) {
    int deg = 0;
    for (int i = 0; i < n; i++) {
        deg += mt[dinh][i];
    }
    return deg;
}

int Degree_Vao(int mt[][Max], int n, int dinh) {
    int deg = 0;
    for (int i = 0; i < n; i++) {
        deg += mt[i][dinh];
    }
    return deg;
}

int main() {
    int n;
    scanf("%d", &n);
    int mt[Max][Max];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mt[i][j]);
        }
    }
    if (Check_Huong(mt, n)){
        for(int i = 0; i < n - 1; i++){
            printf("%d;", Degree_Ra(mt, n, i));
        }
        printf("%d\n", Degree_Ra(mt, n, n - 1));
        for (int i = 0; i < n - 1; i++){
            printf("%d;", Degree_Vao(mt, n, i));
        }
        printf("%d", Degree_Vao(mt, n, n - 1));
    }
	else{
        for(int i = 0; i < n - 1; i++){
            printf("%d;", Degree(mt, n, i));
        }
        printf("%d\n", Degree(mt, n, n - 1));
    }
    return 0;
}
