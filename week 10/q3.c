//transpose of matrix
#include <stdio.h>
int main() {
    int m, n;
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int i,j,A[m][n], T[n][m];

    // Input matrix elements
    printf("Enter elements of the matrix (%d x %d):\n", m, n);
    for ( i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Display transpose
    printf("Transpose of the matrix:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    
}

