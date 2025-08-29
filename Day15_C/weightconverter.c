#include <stdio.h>
#include <math.h>

int main(){

float kg;
float lb;
int select;

printf("Enter 1 for kg to lb, 2 for lb to kg");
scanf("%d", &select);

if (select == 1){
    printf("Enter the amount:");
    scanf("%f", &kg);
    lb = kg*2.404;
    printf("%.2f kg = %.2f lb\n ", kg, lb);
} else if (select == 2){
    printf("Enter the amount:");
    scanf("%f", &lb);
    kg = lb*0.453;
    printf("%.2f lb = %.2f kg", lb, kg);

}else {
    printf("You have entered invalid value, please run the program again.");
}
}