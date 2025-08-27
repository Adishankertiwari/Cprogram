#include <stdio.h>
#include <math.h>

int main(){

    float P;
    float R;
    float T;

    printf("Enter the principle amount:");
    scanf("%f", &P);
    printf("Enter the rate of interest:");
    scanf("%f", &R);
    printf("Enter the Time(in years):");
    scanf("%f", &T);

    float S = (P*R*T)/100;
    printf("The Simple interest is %f:", S);

    return 0;
}