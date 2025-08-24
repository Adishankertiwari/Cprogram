#include <stdio.h>
#include <math.h>
#include <stdlib.h> // for abs()

int main(){

    // here, float y = sqrt(x); would calculate the square root of x
    // here, float y = pow(x, 4); would calculate x raised to the power of 4

    int x = 9;
    float y = pow(x, 4);
    printf("Power of %d is %.2f\n", x, y);

    // Here, we calculate the round off,ceil and floor of an decimal number.
    /* Now ceil is used to get the smallest integer greater than or equal to a given number.
    floor is used to get the largest integer less than or equal to a given number.
    round is used to get the nearest integer to a given number.
    */

    float z = 3.91;
    float a = round(z);
    float b = ceil(z);
    float c = floor(z);
    int p = -3;
    int d = abs(p); // works only for int data type

    printf("Ceiling of %.2f is %.2f\n", z, b);
    printf("Floor of %.2f is %.2f\n", z, c);
    printf("Rounded value of %.2f is %.2f\n", z, a);
    printf("Absolute value of %d is %d\n", p, d);

    return 0;
}
