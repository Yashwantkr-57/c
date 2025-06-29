#include<stdio.h>
int main(){
    int factorial=1,n,i=1;
    printf("Enter  number:");
    scanf("%d",&n);
    do{
        factorial*=i;
        i++;
        
        //i++;
    }
    while(i<=n);
    printf("the factorial %d is :%d",n,factorial);
    return 0;
}