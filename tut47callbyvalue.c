//Q9.2 PROGRAM TO USE FUNCTION (USING CALL BY VALUES)
#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    //printf("Swaped value :a=%d,b=%d\n",a,b);
    return;
}
int main(){
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
   
    scanf("%d",&y);
    printf("Initial value :x=%d,y=%d\n",x,y);
    swap(x,y);
    printf("Afterswap value :x=%d,y=%d",x,y);
    return 0;


}