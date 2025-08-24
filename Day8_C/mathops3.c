#include <stdio.h>
#include <math.h>

int main(){

    float x;
    float a;

    printf("Enter a positive number: \n");
    scanf("%f", &x);
    printf("Enter another positive number: \n");
    scanf("%f", &a);
    float y = log(x); // natural logarithm (base e)
    float b = sin(a); // sine of a (a in radians) a = 1.57 will give 1.00

    printf ("Natural log of %.2f is %.2f\n", x, y);
    printf ("Sine of %.2f is %.2f\n", a, b);
    return 0;
}