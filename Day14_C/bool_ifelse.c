#include <stdio.h>
#include <stdbool.h>

int main(){

    bool student;
    int temp;

    printf("Are you a student?\nEnter 1 for True, 0 for false: ");
    scanf("%d", &temp);
    while (getchar() != '\n');

    student = temp; // automatically converts 0 to false, nonzero to true

    if (student) {
    printf("You're a student.\n");
    printf("Enter your student ID: ");

    char ID[10];
    fgets(ID, sizeof(ID), stdin);
    printf("Your Student ID is %s", ID);
    }
    else{
    printf("You ain't a student.You can exit the page");
    }
    return 0;


}