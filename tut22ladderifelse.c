#include<stdio.h>
int main (){
    int a,b,c,d;
    printf("enter four numbers = ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
   // printf("enter the value of a ");
    //scanf("%d",&a);
    //printf("enter the value of b ");
    //scanf("%d",&b);
    //printf("enter the value of c ");
    //scanf("%d",&c);
    //printf("enter the value of d ");
    //scanf("%d",&d);
    if(a>b){
        if(a>c){
            if(a>d){
                printf("a is greatest");
            }
            else{
                printf("d is greatest");
            }
        }
        else
        if(c>d){
            printf("c is greatest");
        }
        else{
            printf("d is greatest");
        }
    }
    else
    if(b>c){
        if(b>d){
            printf("b is greatest");
        }
        else{
            printf("d is greatest");
        }

    }
    else{
        if(c>d){
            printf("c is greatest");
        }
        else{
            printf("d is greatest");

            
        }
    }

}

