//Write a C program to input two numbers and find their sum, difference, product, and quotient using switch case.
#include <stdio.h>

int main() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum: %d\n", num1 + num2);
            break;
        case 2:
            printf("Difference: %d\n", num1 - num2);
            break;
        case 3:
            printf("Product: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Quotient: %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}