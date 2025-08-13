#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    // Input three integers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Calculate average
    average = (num1 + num2 + num3) / 3.0;
    printf("\nAverage: %.2f\n", average);

    return 0;
}
