#include <stdio.h>

int main() {
    int M, N, P;

    printf("Enter rows of first matrix (M): ");
    scanf("%d", &M);
    printf("Enter columns of first matrix (N): ");
    scanf("%d", &N);
    printf("Enter columns of second matrix (P): ");
    scanf("%d", &P);

    int matrix1[M][N], matrix2[N][P], result[M][P];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initializing result matrix with 0
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            for (int k = 0; k < N; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Printing the resultant matrix
    printf("Resultant matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
