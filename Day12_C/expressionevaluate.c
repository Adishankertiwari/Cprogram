#include <stdio.h>

int main(){

    float a;
    float b;
    float c;
    float d;

    printf("Enter a,b,c,d:");
    scanf("%f,%f,%f,%f", &a, &b, &c, &d);

    float y = (a+b)*(c-d);
    printf("The result =%f", y);
    
    return 0;
}