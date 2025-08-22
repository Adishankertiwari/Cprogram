#include <stdio.h>

int main(){

    int a, b, temp;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("The numbers after swapping are\n");
    printf("a= %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
