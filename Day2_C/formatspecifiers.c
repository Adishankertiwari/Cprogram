#include <stdio.h>

int main(){

    //This is an example code of how format specifiers can be used

    int num1 = 1;
    int num2 = 100;
    char name[] = "Adi Shanker Tiwari";
    float number = 19.99;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("My Name is %s\n", name);
    printf("A number is %.1f\n", number);

    return 0;
}