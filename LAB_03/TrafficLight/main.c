#include <stdio.h>

int main() {
    char input[10];

    // Input color or code
    printf(
        "Enter a traffic light color (Red, Yellow, Green) or code (R, Y, G): ");
    scanf("%9s", input);

    printf("Your Input %s \n", input);

    switch (input[0]) {
        case 'R':
        case 'r':
            printf("Instruction: STOP\n");
            break;
        case 'Y':
        case 'y':
            printf("Instruction: READY\n");
            break;
        case 'G':
        case 'g':
            printf("Instruction: GO\n");
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
