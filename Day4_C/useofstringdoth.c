#include <stdio.h>
#include <string.h> // needed here

int main() {
    char hobby[50];
    printf("Enter your hobby: ");
    fgets(hobby, sizeof(hobby), stdin);

    // remove the newline that fgets keeps
    hobby[strcspn(hobby, "\n")] = '\0';

    printf("Your hobby is: %s", hobby);
    return 0;
}
