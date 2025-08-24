#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // area of circle formula is A = πr^2

    double radius;
    const double PI = 3.14159; // defined the value of const PI

    printf("Enter the radius: ");
    scanf("%lf", &radius);
    double area = PI * pow(radius, 2); 
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}