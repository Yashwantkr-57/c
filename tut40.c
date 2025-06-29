#include<stdio.h>
int main(){
    int a[50],n,i,wanted,count=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter array element:");
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&wanted);
    for(i=0;i<n;i++){
        if(wanted==a[i]){
            printf("/n Element found at location=%d\n",i);
            count++;
        }
    }
    if(count==0){
        printf("\n Element not found in the array\n");
    }
    return 0;
}