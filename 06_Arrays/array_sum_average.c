//Write a C program to calculate the sum and average of array elements.
#include <stdio.h>
int main(){
    int n, i;
    float sum=0, average;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    average = sum/n;
    printf("Sum of array elements: %.3f\n", sum);
    printf("Average of array elements: %.3f\n", average); // Displaying the sum and average with three decimal places
    return 0;
}