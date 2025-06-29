#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,sum,sub,mul,div,mod;
    printf("enter the number a\n and b=");
    //scanf("%d ",&a);
    //printf("enter the number b=");
    scanf("%d%d",&a,&b);
    //printf("enter the number b=");
    // scanf("%d ",&b);
    //addition of two num
    sum=a+b;
    printf("the sum is =%d\n",sum);
    //substraction of two num
    sub=a-b;
    printf("the sub is =%d\n",sub);
    //multiplication of two num
    mul=a*b;
    printf("the mul is =%d\n",mul);
    //division of two num
    div=a/b;
    printf("the div is =%d\n",div);
   //modulus of two num
    mod=a%b;
    printf("the mod is =%d\n",mod);
 



}