#include <stdio.h>

int main() {
    int i,j,n = 5;//print inverted right pyramid

    // First loop for printing all rows
    for (int i = 0; i < n; i++) {

        // First inner loop for printing leading white
        // spaces
        for (int j = 0; j < 2 * i; j++) {
            printf("" );
        

        // Second inner loop for printing stars *
        for (int k = 0; k < n - i; k++) {
            printf("%c ", i + 'A');
        }
        printf("\n");
    }
}
    return 0;
}
