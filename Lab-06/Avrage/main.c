#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, avg;
    printf("Enter The Number of Element : ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Input Element No %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    avg = sum / n;
    printf("Avrage = %f", avg);
}