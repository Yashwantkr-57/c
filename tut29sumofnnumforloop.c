#include<stdio.h>
int main(){
    int i,n,sum=0;//sum of first n whole numbers
    printf("enter whole no n :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum += i;
    }
        printf("sum=%d\n",sum);
    
    return 0;
}