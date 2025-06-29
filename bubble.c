#include<stdio.h>
int main(){
    int arr[8]={6,8,7,4,2,5,9,3};
    for(int i=0;i<7;i++){
        for(int j=0;j<7-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array:\n");
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
   }
    return 0;

}