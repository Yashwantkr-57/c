#include<stdio.h>
int main(){
    int a,b,choice,sum,sub,mul,div;
    printf("enter two numbers = ");
    scanf("%d%d",&a,&b);
    printf("enter the choice 1,2,3,4 = ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        sum=a+b;
        printf("sum of two numbers = %d",sum);
        break;
        case 2:
        sub=a-b;
        printf("sub of two numbers = %d",sub);break;
        case 3:
        mul=a*b;
        printf("mul of two numbers = %d",mul);
        break;
        case 4:
        div=a/b;
        printf("div of two numbers = %d",div);
        break;

    }
}