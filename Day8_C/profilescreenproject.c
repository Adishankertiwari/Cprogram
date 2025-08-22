#include<stdio.h>
#include<string.h>

int main(){

    char name[90];
    char course[90];
    char UID[10];
    char email[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;  // Remove newline character

    printf("Enter your course: ");
    fgets(course, sizeof(course), stdin);
    course[strcspn(course, "\n")] = 0;  // Remove newline character

    printf("Enter your UID: ");
    fgets(UID, sizeof(UID), stdin);
    UID[strcspn(UID, "\n")] = 0;  // Remove newline character

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Enter your email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = 0;  // Remove newline character

    // Display the entered information
    printf("\nProfile Information:\n");
    printf(" Name: %s\n", name);
    printf(" Course: %s\n", course);
    printf(" UID: %s\n", UID);
    printf(" Email: %s\n", email);

    return 0;
}