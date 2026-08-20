//Write a C program to check whether a number is positive, negative, or zero.
#include <stdio.h>
int main(){
    int num, positive, negative, zero;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>0){
        printf("The number is positive.");
    }
    else if(num<0){
        printf("The number is negative.");
    }
    else{
        printf("The number is zero.");
    }
}