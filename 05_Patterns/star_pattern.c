//Write a C program to print different star patterns using nested loops.
//A. Rectangle
#include<stdio.h>
int main(){
    int i, j, rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    for(i=1; i<=rows; i++){
        for(j=1; j<cols; j++){
            printf("*");
            
        }
         printf("\n");
    }
    return 0;

}
