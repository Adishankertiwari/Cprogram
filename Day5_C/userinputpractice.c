#include <stdio.h>
#include <string.h>

int main(){

    char name[90];
    int age;
    int ID;
    char course[90];

    printf("Enter your name:\n");
    fgets(name, sizeof name, stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline character from fgets

    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("Enter your ID:\n");
    scanf("%d", &ID);

    getchar();  // Consume the newline character left by scanf
    printf("Enter your course:\n");
    fgets(course, sizeof course, stdin);
    printf("Student Information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("College ID: %d\n", ID);
    printf("Course: %s", course);
    return 0;
}