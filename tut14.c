#include<stdio.h>
#include<conio.h>
//To check the whether it  is isosceles or quadrilateral
int main(){
    int sides,a,b,c;
    printf("Number of sides=");
    scanf("%d",&sides);
 if(sides <= 3)
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