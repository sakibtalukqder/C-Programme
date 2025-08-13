#include <stdio.h>

int main() {
    int n, i;
    printf("Enter The Number of Elements: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter The element on index %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The Array = [");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        n - 1 != i ? printf(",") : 0;
    }
    printf("]");

    return 0;
}