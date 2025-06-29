#include<stdio.h>
int main (){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int arr[n];
    printf("elements of arr %d\n",n);
    for(int i=0;i<n;i++){
        printf("elements[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
        
        }
        printf("sorted array:\n");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);

    }
    return 0;

    
}