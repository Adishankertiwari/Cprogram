#include <stdio.h>
int main() {

int num1, num2;
printf("Enter a number: ");
scanf("%d", &num1);
printf("Enter another number: ");
scanf("%d", &num2);

if (num1 > num2) {
    printf("The first number is greater.\n");
} else if (num1 < num2) {
    printf("The second number is greater.\n");
} else if (num1 == num2) {
    printf("Both numbers are equal.\n");
}

return 0;
}