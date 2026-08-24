//length of string
#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string from the user

    len = strlen(str) - 1; // Calculate the length of the string (excluding the newline character)

    printf("The length of the string is: %d\n", len);

    return 0;
}