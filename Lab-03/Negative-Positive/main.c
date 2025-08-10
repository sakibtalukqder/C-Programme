#include <stdio.h>

int main() {
    int Num;
    printf("Enter a Number : ");
    scanf("%d", &Num);

    if (Num > 0) {
        printf("(%d) is a Positive Number", Num);
    } else if (Num < 0) {
        printf("(%d) is a Negative Number", Num);
    } else {
        printf("Your Input is Zero (%d)", Num);
    }
    return 0;
}