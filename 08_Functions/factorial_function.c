// Write a C function to calculate the factorial of a number.
#include <stdio.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial(n-1); // Recursive call to calculate factorial of n-1
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num)); // Calling the factorial function and printing the result
    return 0;
}