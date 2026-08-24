// Reversse a string in C
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1;

    printf("The reversed string is: ");
    for (i = len; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}