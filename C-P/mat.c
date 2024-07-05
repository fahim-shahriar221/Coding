#include<stdio.h>
int main(){
    int A[5][5],i,j;

    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("First two row of 'A' matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


return 0;
}