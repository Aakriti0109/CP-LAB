//Write a C program to check whether a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;

    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    // Calculate Armstrong sum
    temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        sum = sum + pow(remainder, digits);
        temp = temp / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.", original);
    } else {
        printf("%d is not an Armstrong number.", original);
    }

    return 0;
}