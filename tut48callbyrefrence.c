//Q9.3 PROGRAM TO INTERCHANGE VALUES OF 2 VARIABLES USING CALL BY REFERENCE
#include<stdio.h>
void interchange(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
int main(){
    int x,y;
    printf("enter value of x: ");
    scanf("%d",&x);
    printf("enter value of y: ");
   
    scanf("%d",&y);
    printf("initial value :x=%d,y=%d\n",x,y);
    interchange(&x,&y);
    printf("interchanged value :x=%d,y=%d",x,y);
    return 0;

}
