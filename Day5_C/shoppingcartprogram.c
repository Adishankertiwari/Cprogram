#include <stdio.h>
#include <string.h>

int main(){

    char item[50];
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Enter the item name:");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = 0; // Remove newline character

    printf("Enter the price of the item: ");
    scanf("%f", &price);

    printf("Enter the quantity of the item: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Item: %s\n", item);
    printf("Price: %.2f%c\n", price, currency);
    printf("Quantity: %d\n", quantity);

    printf("You have brought %d %s\n", quantity, item);
    printf("Total: %c%.2f\n", currency, total);

    return 0;
}