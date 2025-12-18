//to add matrix
#include <stdio.h>
int main() {
    int n;
    printf("Enter the order of the matrices (n): ");
    scanf("%d", &n);

    int A[n][n], B[n][n], Sum[n][n], j,i;

   
    printf("Enter elements of matrix A (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }


    printf("Enter elements of matrix B (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }


    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }


    printf("Sum of matrices A and B:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }


}

