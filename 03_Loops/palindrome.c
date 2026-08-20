//Write a C program to check whether a number is a palindrome.
#include<stdio.h>
int main(){
    int temp, x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x<0){
        printf("The number is not a palindrome.");
    }
    else{
        temp=x;
        int rev=0;
        while(temp!=0){
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==x){
            printf("The number is a palindrome.");
        }
        else{
            printf("The number is not a palindrome.");
        }
    }
}