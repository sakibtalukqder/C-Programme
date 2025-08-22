#include <stdio.h>
int main() {
    int i, sum = 0;

    for (i = 20; i <= 30; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nThe Summation = %d", sum);
}