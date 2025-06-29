#include<stdio.h>
int main(){
    int factorial=1,n,i=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n){
        factorial*=i;
        i++;
        
        //i++;
    }
    printf("the factorial %d is %d",n,factorial);
    return 0;
}