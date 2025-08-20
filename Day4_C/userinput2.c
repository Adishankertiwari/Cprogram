#include <stdio.h>

int main() {
    char name[50];
    char course[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your course: ");
    fgets(course, sizeof(course), stdin);

    printf("Hello, %s", name);
    printf("You are enrolled in: %s", course);
    return 0;
}
// Note: fgets is used instead of scanf to read a full line including spaces.