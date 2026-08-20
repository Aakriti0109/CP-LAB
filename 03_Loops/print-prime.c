//WAP to print all prime numbers between two given numbers.
#include <stdio.h>

int main(){
    int start, end, i, j, isPrime;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for(i = start; i <= end; i++){
        if(i == 1){
            continue;
        }
        isPrime = 1;
        for(j = 2; j <= i/2; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d ", i);
        }
    }
    return 0;
}