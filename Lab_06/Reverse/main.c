#include <stdio.h>

int main() {
    int n, i;
    printf("Enter The Size Of the array : ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter array[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The Array = [ ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1)
            printf(",");
    }
    printf(" ] \n");

    printf("Reverse Array = [ ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i != 0)
            printf(",");
    }
    printf(" ]");
}