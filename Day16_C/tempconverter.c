#include <stdio.h>

int main(){

    char choice;
    float C;
    float F;

    printf("C for Fahrenheit to Celcius\n");
    printf("F for Celsius to Fahrenheit\n");
    printf("Select C/F: \n");
    scanf("%c", &choice);

    if (choice == 'C'){
        printf("Enter the fahrenheit value");
        scanf("%f", &F);
        C = (F - 32)*(5.0/9.0);
        printf("%.2f degree fahrenheit in Celsius is %.2f degree celsius", F, C);
    } else if (choice == 'F'){
        printf("Enter the celsius value");
        scanf("%f", &C);
        F = (C*(9.0/5.0)) + 32;
        printf("%.2f degree celsius in fahrenheit is %.2f degree fahrenheit.", C, F);

    } else{
        printf("You have input invalid input, please restart the program");
    }
    return 0;


}