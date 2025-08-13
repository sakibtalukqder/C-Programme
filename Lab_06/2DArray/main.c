#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Enter Row And Column Size : ");
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter Element arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The 2D Array = [ \n");
    for (i = 0; i < n; i++) {
        printf("  { ");
        for (j = 0; j < m; j++) {
            printf("%d", arr[i][j]);
            if (j != m - 1)
                printf(",");
        }
        printf(" }\n");
    }
    printf("]");
}