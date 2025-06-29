#include<stdio.h>
int main(){
    int tax,salary,deducted_salary;
    printf("enter the salary = ");
    scanf("%d",&salary);
    if(salary>=45000 && salary<=54000)
    {
        tax=1000;
        deducted_salary=salary-tax;
        printf("the tax is %d\n",tax);
        printf("the deducted_salary is %d",deducted_salary);
    }
    else if(salary>=55000 && salary<=64000)
    {
        tax=2000;
        deducted_salary=salary-tax;
        printf("the tax is %d\n",tax);
        printf("the deducted_salary is %d",deducted_salary);
    }
    else if(salary<45000)
    {
        tax=0000;
        deducted_salary=salary-tax;
        printf("the tax is %d\n",tax);
        printf("the deducted_salary is %d",deducted_salary);
    }
    else
    
    {
        tax=4000;
        deducted_salary=salary-tax;
        printf("the tax is %d\n",tax);
        printf("the deducted_salary is %d",deducted_salary);
    }
}