//Write a C program to calculate the factorial of a number.
#include <stdio.h>
int main(){
    int num, i;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if(num < 0){
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else{
        for(i = 1; i <= num; ++i){
            factorial *= i;
        }
        printf("Factorial of %d = %llu", num, factorial);
    }
    return 0;
}
