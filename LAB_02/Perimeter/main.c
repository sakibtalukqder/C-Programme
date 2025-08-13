#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    printf("\n--- Rectangle Properties ---\n");
    // Calculate area
    area = length * width;
    printf("Area: %.2f\n", area);

    // Calculate Perimeter
    perimeter = 2 * (length + width);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
