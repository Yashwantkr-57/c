#include<stdio.h>
int main(){
    float maths,eng,sci,hindi,percentage;//wap to pass and fail with percentage
    printf("marks in maths = ");
    scanf("%f",&maths);
    printf("marks in eng = ");
    scanf("%f",&eng);
    printf("marks in sci = ");
    scanf("%f",&sci);
    printf("marks in hindi = ");
    scanf("%f",&hindi);
    //scanf("%d %d %d %d",&maths,&eng,&sci,&hindi);//this will print the output together.
    percentage=(maths+eng+sci+hindi)*100/400;//total marks =400
    printf("The percentage is =%f\n",percentage);
    if(percentage>30)
    printf("student is pass");
    else
    printf("student is fail");
    
}