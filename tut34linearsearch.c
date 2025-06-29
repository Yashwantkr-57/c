#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d (index %d)\n", i + 1, i);
            found = 1;
            break;
        }
    }

    if (arr[i]=!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
