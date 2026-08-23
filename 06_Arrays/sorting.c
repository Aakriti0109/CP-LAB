//Write a C program to sort an array in ascending order.
#include <stdio.h>
int main() {
    int n, i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // Sorting the array in ascending order using bubble sort
    for(i=0; i<n-1; i++){ // Loop for each element in the array
        for(j=0; j<n-i-1; j++){  // Loop for comparing adjacent elements
            if(arr[j] > arr[j+1]){ // If the current element is greater than the next element, swap them
                temp = arr[j]; // Store the current element in a temporary variable
                arr[j] = arr[j+1]; // Replace the current element with the next element
                arr[j+1] = temp; // Replace the next element with the value stored in the temporary variable
            }
        }
    }
    printf("Sorted array in ascending order: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
