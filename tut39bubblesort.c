#include <stdio.h>

// Function to sort the array using Bubble Sort
void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// Function for binary search
int binarySearch(int a[], int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1; // If key is not found
}

int main() {
    int n, key, i;

    // Get the size of the array from the user
    printf("Enter total array elements: ");
    scanf("%d", &n);

    int a[n]; // Declare an array of size n

    // Get array elements from the user (unsorted)
    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort the array before binary search
    bubbleSort(a, n);

    // Display sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Get the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binarySearch(a, n, key);

    // Display the result
    if (result != -1)
        printf("Element %d is present at index %d .\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}

