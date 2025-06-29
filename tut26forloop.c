#include<stdio.h>
int main(){//print right half of pyramid using alphabets
    char i,j,a,rows=5;
    for(i=0;i<rows;i++){
        for(j=0;j<=i;j++){

            printf("%c",i+'a');
        }
        printf("\n");
    }
}