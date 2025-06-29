#include<stdio.h>
void main(){
    int  sides,a,b,c;
    scanf("%d", sides);
    if( sides == 3)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a==b)||(a==c)||(b==c))
        printf("It is isosceles \n");
        else
        printf("It is not isosceles");
    }
    else
    printf("It is a quadrilateral");
}