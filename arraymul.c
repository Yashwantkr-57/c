#include<stdio.h>
int main(){
    int m,n;
    printf("enter m :");
    scanf("%d",&m);
    printf("enter n :");
    scanf("%d",&n);
    int arr1[m][n],sub[m][n];
    int arr2[m][n];
    printf("enterelementsof arr1\n",m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d",&arr1[i][j]);

        }
    }
    printf("enterelementsof arr2\n",m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("enterelementsof sub\n",m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            //printf("Element [%d][%d]: ", i, j);
            sub[i][j]=arr1[i][j]-arr2[i][j];
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}