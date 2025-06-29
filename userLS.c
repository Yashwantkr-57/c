#include<stdio.h>
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
       
    }
     return -1;
}
int main(){
    int arr[8]={4,8,6,5,9,1,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key1=5, key2=2;
    int index1=linearSearch(arr,n,key1);
    int index2=linearSearch(arr,n,key2);
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
   