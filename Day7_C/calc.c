#include <stdio.h>
#include <math.h>   

int main(){

    int a;
    int b;
    char operator;
    float result;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator){

        case '+':
        result = a + b;
        break;

        case '-':
        result = a - b;
        break;

        case '*':
        result = a * b;
        break;

        case '/':
        result = (float)a / b;
        break;

        default:
        printf("Invalid operator\n");
        return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}