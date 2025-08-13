#include <stdio.h>

int main() {
    int id, batchNumber;
    char gender;
    float cgpa;

    // Input personal information
    printf("Enter your ID: ");
    scanf("%d", &id);

    printf("Enter your batch number: ");
    scanf("%d", &batchNumber);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    // Output personal information
    printf("\n--- Personal Information ---\n");
    printf("ID: %d\n", id);
    printf("Batch Number: %d\n", batchNumber);
    printf("Gender: %c\n", gender);
    printf("CGPA: %.2f\n", cgpa);

    return 0;
}
