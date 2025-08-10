#include <stdio.h>

int main() {
    int num1, num2, remainder;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Find The Remainder 
    remainder = num1 % num2;
    printf("\nRemainder of %d and %d is: %d\n", num1, num2, remainder);
   
    return 0;
}
