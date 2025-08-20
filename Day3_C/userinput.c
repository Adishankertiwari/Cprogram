#include <stdio.h>
#include <string.h>

int main(){

    int age;
    float gpa;
    char grade;
    char name[30];

    printf("Enter your age:");
    scanf("%d", &age);

    printf("Enter your GPA:");
    scanf("%f", &gpa);


    printf("Enter your grade:");
    scanf(" %c", &grade);

    while(getchar() != '\n'); // clear the newline character, used after scanf().
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin); // using fgets to read a string with spaces
    name[strlen(name) - 1] = '\0'; // remove newline character specifically for fgets()

    printf("You are %d years old.\n", age);
    printf("Your gpa is %.1f.\n", gpa);
    printf("Your grade is %c.\n", grade);
    printf("Your name is %s.\n", name);

}