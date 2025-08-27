#include <stdio.h>

int main(){

    int x;
    char command;
    int y;

    printf("Enter a number to increment/decrement:");
    scanf("%d", &x);
    printf("Increment/Decrement(i/d)?");
    scanf(" %c", &command);

    switch(command){

        case 'i':
        y = ++x;
        break;

        case 'd':
        y = --x;
        break;

        default:
        printf("invalid operator");
        return 1;

    }



    printf("The result is %d", y);

    return 0;

}