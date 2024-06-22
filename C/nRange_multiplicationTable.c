#include<stdio.h>
int main (){
    int s,e,i,j;
    printf("Enter starting number: ");
    scanf("%d",&s);
    printf("Enter ending number: ");
    scanf("%d",&e);
    if (s>e){
    printf("Invalid");
    return 1;
    }
    for (i=s; i<=e; i++){
    printf("\nMultiplication Table for %d\n",i);
    for (j=1; j<=10; j++){
        printf("%d X %d = %d\n",i,j,i*j);
    }
 } 
    return 0;
}