#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, key1, key2;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter first key to search: ");
    scanf("%d", &key1);
    printf("Enter second key to search: ");
    scanf("%d", &key2);

    int index1 = binarySearch(arr, n, key1);
    int index2 = binarySearch(arr, n, key2);

    if (index1 != -1)
        printf("Key %d found at index %d\n", key1, index1);
    else
        printf("Key %d not found\n", key1);

    if (index2 != -1)
        printf("Key %d found at index %d\n", key2, index2);
    else
        printf("Key %d not found\n", key2);

    return 0;
}
