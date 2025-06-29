#include<stdio.h>
int main(){
    int i=0,table;//print table of 99
    printf("Enter the table:");
    scanf("%d",&table);
    while(i<=10){
        printf("%d*%d=%d\n",table,i,(table*i));
        i++;
    }
    return 0;
}