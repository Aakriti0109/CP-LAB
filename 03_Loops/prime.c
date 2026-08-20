//Write a C program to check whether a number is prime
//Write a C program to print all prime numbers between two given numbers.
#include<stdio.h>
int main(){
    int num, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if(num <= 1){
        printf("%d is not a prime number.", num);
    }
    else{
        for(i = 2; i <= num/2; ++i){
            if(num % i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d is a prime number.", num);
        }
        else{
            printf("%d is not a prime number.", num);
        }
    }
    return 0;
}
