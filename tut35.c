#include <stdio.h>

// Function to count occurrences of key in array
int countOccurrences(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, key;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    int occurrence = countOccurrences(arr, n, key);

    if (occurrence > 0) {
        printf("Element %d found %d time(s) in the array.\n", key, occurrence);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
