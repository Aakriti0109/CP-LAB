// Write a C function to check if a number is prime.
#include <stdio.h>
#include <math.h>

int isPrime(int n) { 
    if(n <= 1) {
        return 0;
    }
    if(n <= 3) {
        return 1;
    }
    if(n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    for(int i = 5; i * i <= n; i += 6) { // Check for factors from 5 to sqrt(n) with a step of 6 (to check only numbers of the form 6k ± 1)
        if(n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPrime(num)) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }
    return 0;
}