#include <stdio.h>

int main() {
    int rows;
    char ch = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        ch = 'A';  // Reset to 'A' for each row
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
