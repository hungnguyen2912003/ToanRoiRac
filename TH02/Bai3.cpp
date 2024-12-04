#include <stdio.h>
#include <math.h>
double calculateBalance(double principal, double interestRate, double numYears) {
    double balance = principal;
    double interest;
    
    if (numYears < 0.25) {
        interest = 0.046;
    }
    else if (numYears < 0.5) {
        interest = 0.056;
    }
    else if (numYears < 1) {
        interest = 0.066;
    }
    else {
        interest = 0.076;
    }
    
    balance = balance * pow(1 + interest, numYears);
    
    return balance;
}
int main() {
    double principal;
    double numYears;
    
    printf("Nhap so tien ban dau: ");
    scanf("%lf", &principal);
    
    printf("Nhap so nam: ");
    scanf("%lf", &numYears);
    
    double balance = calculateBalance(principal, numYears);
    
    printf("So tien trong tai khoan sau %.2lf nam la: %.4lf\n", numYears, balance);
    
    return 0;
}
