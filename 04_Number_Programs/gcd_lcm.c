//Write a C program to find the GCD and LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find GCD
    int x = a, y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    // Find LCM
    lcm = (a * b) / gcd;

    printf("GCD of %d and %d is %d\n", a, b, gcd);
    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}