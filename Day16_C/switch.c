#include <stdio.h>

int main(){

    /*switch operator : An alternative to using many if else statements
    more efficeint with fixed integer values*/

    int dayofweek;

    printf("Enter the day number(From 1 to 7)");
    scanf("%d", &dayofweek);

    switch(dayofweek){
        case 1: 
        printf("It's Monday");
        break;

        case 2:
        printf("It's Tuesday");
        break;

        case 3:
        printf("It's Wednesday");
        break;

        case 4:
        printf("It's Thursday");
        break;

        case 5:
        printf("It's Friday");
        break;

        case 6:
        printf("It's Saturday");
        break;

        case 7:
        printf("It's Sunday");
        break;
        
    }

    if (dayofweek > 7){
        printf("Invalid Input");
    }

    if (dayofweek < 1){
        printf("Invalid Input");
    }
    return 0;

}