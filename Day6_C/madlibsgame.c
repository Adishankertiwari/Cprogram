#include <stdio.h>
#include <string.h>

int main(){

    // The template is funny, it goes smth like this
    //"My (adjective) (animal) loves to (verb) on my (object)."
    char adjective[80] = "";
    char animal[80] = "";
    char verb[80] = "";
    char object[80] = "";

    printf("Enter a silly adjective:");
    fgets(adjective, sizeof(adjective), stdin);
    adjective[strcspn(adjective, "\n")] = 0;  // Remove newline character

    printf("Enter an animal:");
    fgets(animal, sizeof(animal), stdin);
    animal[strcspn(animal, "\n")] = 0;  // Remove newline character

    printf("Enter a verb:");
    fgets(verb, sizeof(verb), stdin);
    verb[strcspn(verb, "\n")] = 0;  // Remove newline character

    printf("Enter an object:");
    fgets(object, sizeof(object), stdin);
    object[strcspn(object, "\n")] = 0;  // Remove newline character

    printf("My %s %s loves to %s on my %s.", adjective, animal, verb, object);

    return 0;

}