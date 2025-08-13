#include <stdio.h>

int main() {
    int num1, num2, sum, difference, product;
    float quotient;

    // Input two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Display results
    printf("\n--- Results ---\n");

    // Summations
    sum = num1 + num2;
    printf("Sum: %d\n", sum);

    // Diffrence
    difference = num1 - num2;
    printf("Difference: %d\n", difference);

    // product
    product = num1 * num2;
    printf("Product: %d\n", product);

    // quotient
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Devide %d by %d = Infinity", num1, num2);
    }

    return 0;
}
