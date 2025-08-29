#include <stdio.h>

int main(){
    //if statements = Do the code if the condition is True 
    // don't do if it's False
    // You can insert multiple else if between if and else.
    int age;

    printf("Enter your age");
    scanf("%d", &age);

    if (age >= 65) {
        printf("Ssup Unc, how are the knees?");
    
    } else if(age < 0) {
        printf("You haven't been born yet, get tf outta here.");

    } else if(age >= 18) {
        printf("You're a grown ass man nigg, stop harassing lil kids");

    } else {
        printf("Get the fuck outta here lil minor.");

    }
    return 0;

}