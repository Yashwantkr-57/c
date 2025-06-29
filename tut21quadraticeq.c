#include<stdio.h>
#include<math.h>
int main(){/*to calculate the roots of quadratic equation */
    int a,b,c;
    float disc,d,root1,root2,i;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("enter the value of c\n");
    scanf("%d",&c);
    disc= b*b-4*a*c;
    if(disc<0)
    {
    //d=sqrt(disc);
    //root1=-b-d/(2*a);
    //root2=-b+d/(2*a);
    printf("the roots are real and distinct\n");
    //printf("the roots are %f %f\n",root1,root2);
    }
    if(disc==0)
    {
    //d=sqrt(disc);
    //root1=-b/(2*a);
    //root2=-b+d/(2*a);
    printf("the roots are equal\n");
    //printf("the roots are %f \n",root1);
    }
    if(disc>0)
    {
    //d=sqrt(disc);
    //root1=-b/(2*a)-i*d/(2*a);
    //root2=-b/(2*a)+i*d/(2*a);
    printf("the roots are complex\n");
    //printf("the real part is  %f\n",-b/(2*a));
    //printf("the imaginary part is +i %f,-i%f\n",d/(2*a));
    }
    
    root1=((-b+sqrt(disc))/(2*a));
    root2=((-b-sqrt(disc))/(2*a));
    printf("\n roots are %f %f",root1,root2);

    
    

    return 0;
    
}