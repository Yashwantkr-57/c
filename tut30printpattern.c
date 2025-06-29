#include <stdio.h>

int main() {
    int n = 5;

    // First loop for printing all rows
    for (int i = 0; i < n; i++) {

        // First inner loop for printing white spaces
        for (int j = 0; j < 2 * i; j++)
            printf(" ");

        // Second inner loop for printing star *
        for (int k = 0; k < n - i; k++)
            printf("%c ", k + 'A');
        printf("\n");
    }

    return 0;
}
