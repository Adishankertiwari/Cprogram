#include <stdio.h>
#include <math.h>

int main(){

    // here, float y = sqrt(x); would calculate the square root of x
    // here, float y = pow(x, 4); would calculate x raised to the power of 4

    int x = 9;
    float y = pow(x, 4);
    printf("Power of %d is %.2f\n", x, y);

    float z = 3.91;
    float a = round(z);
    float b = ceil(z);
    float c = floor(z);

    printf("Ceiling of %.2f is %.2f\n", z, b);
    printf("Floor of %.2f is %.2f\n", z, c);
    printf("Rounded value of %.2f is %.2f\n", z, a);
}
