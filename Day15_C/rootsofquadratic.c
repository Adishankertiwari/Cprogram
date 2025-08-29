#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c,x,y,D;
   

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a,&b,&c);

    D = pow(b, 2) - 4*a*c;

    if (D>0) {
        x = (-b + sqrt(D)) / (2*a);
        y = (-b - sqrt(D)) / (2*a);
        printf("The roots of quadratic equation %.2lfx^2 + %.2lfx + %.2lf are %.2lf and %.2lf\n", a,b,c,x,y);

    } else if (D == 0) {
        x = -b / (2*a);
        y = x;
        printf("The roots of quadratic equation %.2lfx^2 + %.2lfx + %.2lf are %.2lf and %.2lf\n", a,b,c,x,y);

    } else {
        printf("The roots are complex (imaginary).\n");
    }

    return 0;
}
