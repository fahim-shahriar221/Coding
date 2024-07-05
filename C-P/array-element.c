#include<stdio.h>
int main(){
int i,j;
int matrix[5][5];
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("matrix[%d][%d]=",i,j);
        scanf("%d",&matrix[i][j]);
    }
    printf("\n");
}

for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%d",matrix[i][j]);
    }
    printf("\n");
}
printf("the [4][2]element is :%d",matrix[4][2]);
return 0;
}