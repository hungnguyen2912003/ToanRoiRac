#include <stdio.h>

unsigned long long virus(int n){
    if (n == 0){
        return 1;
    } 
	else{
        return 2 * virus(n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%llu", virus(n));
    return 0;
}
