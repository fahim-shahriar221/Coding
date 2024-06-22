#include<stdio.h>
int main(){
    int i,j,r,c;
    printf("Enter row and Column: ");
    scanf("%d%d",&r,&c);
    int A[r][c];

    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSum of rows\n");
    for(i=0; i<r; i++){
        int rsum=0;
        for (j=0; j<c; j++){
            rsum+=A[i][j];
        }
        printf("\nSum of row %d = %d ",i+1,rsum);
    }
    return 0;
}