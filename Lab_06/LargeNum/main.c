#include <stdio.h>

int main() {
    int n, i, max;
    printf("Enter The Size Of the array : ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter array[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The Largest Element of the Array = %d", max);
}