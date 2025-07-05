#include <stdio.h>
#define PI 3.1416

int main() {
    int choice;
    float radius, side, length, width, area;

    // Display menu
    printf("Select a shape to calculate the area:\n");
    printf(" 1. Circle\n 2. Square\n 3. Rectangle\n");

    // Input user choice
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Use if-else to calculate area
    if (choice == 1) {
        printf("Enter the radius of the circle in Miter : ");
        scanf("%f", &radius);
        area = PI * radius * radius;
        printf("Area of the circle = %.2f square miter", area);
    } else if (choice == 2) {
        printf("Enter the side of the square in Miter: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of the square = %.2f square miter", area);
    } else if (choice == 3) {
        printf("Enter the length and width of the rectangle in Miter: ");
        scanf("%f %f", &length, &width);
        area = length * width;
        printf("Area of the rectangle = %.2f square miter", area);
    } else {
        printf("Error: Invalid choice! Please select 1, 2, or 3.\n");
    }

    return 0;
}
