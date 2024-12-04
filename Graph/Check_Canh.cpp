#include<stdio.h>
#include<math.h>
#define max 50
void nhapMang(int a[][max], int &n);
int check_huong(int a[][max], int n);
int cal_canh(int a[][max], int n);
int main(){
    int a[max][max], n;
    nhapMang(a,n);
    printf("%d",cal_canh(a,n));
}
void nhapMang(int a[][max], int &n){
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int check_huong(int a[][max], int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] != a[j][i]) return 1;// Co huong
        }
    }
    return 0;
}
int cal_canh(int a[][max], int n){
    if(check_huong(a,n) == 1){
        int b_ra = 0;
        for(int i =0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(a[i][j] >= 1){       //bac ra
                    b_ra += a[i][j];
                }  
            }
        }
        return b_ra;
    }
    else{
        int bac =0;
        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] >= 1) bac +=a[i][j];
            }
        }
        return round((float)bac/2.0);
    }
}
