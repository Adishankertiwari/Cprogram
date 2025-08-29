#include <stdio.h>
#include <math.h>
int main(){
    
    float A; //Final Amount(Principal+Interest)
    float P; // Principal Amount(Initial amount)
    float R; // Annual interest rate (in %)
    float n; // number of times the interest is compounded per year
    float T; // Time(in years)

    printf("Enter the principal amount\n");
    scanf(" %f", &P);

    getchar();
    printf("Enter the annual interest rate\n");
    scanf(" %f", &R);

    getchar();
    printf("Enter the number of times the interest is compounded per year\n");
    scanf(" %f", &n);

    getchar();
    printf("Enter the time\n");
    scanf(" %f", &T);

    A = P*pow((1+(R/(100*n))),(n*T));
    printf("The compound interest is %.2f", A);

    return 0;
}