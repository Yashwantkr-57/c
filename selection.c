#include<stdio.h>
int main (){
    int n, i,j;
    printf("enter n :");
    scanf("%d",&n);
    int arr[n];
    printf("elements of arr %d\n",n);
    for(int i=0;i<n;i++){
        printf("elements[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        int min_index=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                 min_index=j;
            }
            
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    printf("Sorted list in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}