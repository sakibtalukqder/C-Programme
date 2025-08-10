#include <stdio.h>
int main() {
    float x, y;
    char opr;
    printf("Enter 2 integer Operands X Y : ");
    scanf("%f %f", &x, &y);
    printf("Enter the Operator + - * / : ");
    scanf(" %c", &opr);

    switch (opr) {
        case '+':
            printf("%.2f + %.2f = %.2f", x, y, x + y);
            break;

        case '-':
            printf("%.2f - %.2f = %.2f", x, y, x - y);
            break;

        case '*':
            printf("%.2f * %.2f = %.2f", x, y, x * y);
            break;

        case '/':
            if (y == 0) {
                printf("Error: Cannot Divide %.2f by %.2f", x, y);
            }
            else {
                printf("%.2f / %.2f = %.2f", x, y, x / y);
            }
            break;

        default:
            printf("Error: Invalid Operation !");
            break;
    }

    return 0;
}
