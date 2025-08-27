#include <stdio.h>
#include <math.h>
int main(){

    float Radius;
    float Area;
    float Circumference;
    const PI = 3.14;

    printf("Enter the radius :");
    scanf("%f", &Radius);
    Area = PI*Radius*Radius;
    Circumference = 2*PI*Radius;

    printf("The area of the circle is %.2f\n", Area);
    printf("The Circumference of the circle is %.2f", Circumference);

    return 0;
}    
