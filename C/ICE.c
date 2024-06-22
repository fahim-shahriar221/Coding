#include<stdio.h>
int main (){
    int m,p,e;
    printf("Marks:");
    scanf("%d%d%d",&m,&p,&e);
    if (m>=55 && p>=55 && e>=55)
    printf("Eligible");
    else 
    printf("Not eligible");

    return 0;

}