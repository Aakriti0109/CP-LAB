//Write a C program to reverse a number.
#include<stdio.h>
int main(){
    int temp, x, rev=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x<0){
        printf("The number is negative. Please enter a positive number.");
    }
    else{
        temp=x;
        while(x>0){
            int digit= x%10;
            rev=rev*10+digit;
            x/=10;
        }
        printf("The reversed number is: %d", rev);
    }
    return 0;
}