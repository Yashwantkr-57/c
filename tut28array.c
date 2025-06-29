#include<stdio.h>
int main(){
    
    int a[50],i,n;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("value of array :");
        //for(i=0;i<n;i++){
            //printf("Enter value for a[%d]: ", i);
            scanf("%d", &a[i]);
        
        
    }
    for(i=0;i<n;i++){
    printf(" %d ",a[i]);
    }
    return 0;
}