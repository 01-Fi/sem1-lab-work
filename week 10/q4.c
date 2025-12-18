//triangular matrix
#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    int A[n][n];
    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nLower Triangular Matrix:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            if (i >= j)
                printf("%d ", A[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    printf("\nUpper Triangular Matrix:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            if (i <= j)
                printf("%d ", A[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

