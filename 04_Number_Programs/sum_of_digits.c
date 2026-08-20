//Write a C program to find the sum of digits of a number.
//Write a C program to count the number of digits in a number.
#include <stdio.h>

int main() {
    int n, count = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        sum += n % 10;
        n = n / 10;
        count++;
    }

    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);
    return 0;
}