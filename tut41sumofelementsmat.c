#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows m: ");
    scanf("%d", &m);
    printf("Enter the number of columns n: ");
    scanf("%d", &n);
    
    int matrix[m][n];
    int sum = 0;
    
    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            
        }
    }
    
    // Display the matrix
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        printf("%d\t", matrix[i][j]);
        sum += matrix[i][j]; // Adding elements to sum
        }
        printf("\n");
    }
    
    // Display the sum of all elements
    printf("\nSum of elements of matrix: %d\n", sum);
    
    return 0;
}

