#include <stdio.h>

int main() {
    float km;
    float m, ft, inch, cm;
    int input;

    printf("The default input is Km, enter 1/2/3/4 to convert into m/ft/inch/cm: ");
    scanf("%d", &input);

    printf("Enter the input in KM: ");
    scanf("%f", &km);

    if (input == 1) {
        m = km * 1000;
        printf("%.2f km = %.2f m\n", km, m);

    } else if (input == 2) {
        ft = km * 3280.84;
        printf("%.2f km = %.2f ft\n", km, ft);

    } else if (input == 3) {
        inch = km * 39370.1;
        printf("%.2f km = %.2f inch\n", km, inch);

    } else if (input == 4) {
        cm = km * 100000;
        printf("%.2f km = %.2f cm\n", km, cm);

    } else {
        printf("You have entered invalid input, please run the program again.\n");
    }

    return 0;
}

