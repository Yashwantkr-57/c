#include<stdio.h>
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;//element not found
}
int main(){
    int n, key1, key2;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter first key to search: ");
    scanf("%d", &key1);
    printf("Enter second key to search: ");
    scanf("%d", &key2);

    int index1 = linearSearch(arr, n, key1);
    int index2 = linearSearch(arr, n, key2);

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