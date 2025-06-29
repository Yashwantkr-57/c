#include <stdio.h>

// Function for binary search
int binarySearch(int a[], int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        // Check if key is present at mid
        if (a[mid] == key)
            return mid;
        // If key is smaller, search in left half
        else if (a[mid] > key)
            right = mid - 1;
        // If key is larger, search in right half
        else
            left = mid + 1;
    }
    
    // If key is not found
    return -1;
}

int main() {
    int a[] = {5, 10, 15, 20, 25}; // Given sorted array
    int key = 15;
    int size = sizeof(a) / sizeof(a[0]);

    int result = binarySearch(a, size, key);

    if (result != -1)
        printf("Element %d is present at index %d.\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
