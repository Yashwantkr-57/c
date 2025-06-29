#include <stdio.h>

int main() {
    int n, i;
    float total = 0, average;
    float marks[n];
    printf("Enter number of students: ");
    scanf("%d", &n);

    //float marks[n];

    for (i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    average = total / n;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);

    return 0;
}
