// this is maths operation example
#include <stdio.h>

int main() {
    int a, b;
    char operator;
    float result;

    printf("Enter a simple two digit mathematical operation: ");
    scanf("%d %c%d", &a, &operator, &b);
   

    switch (operator) {
        case '+':
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (b != 0) {
                result = (float)a / b;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}   