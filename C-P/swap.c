#include<stdio.h>
int main (){
    int a,b,c;
    printf("A= ");
    scanf("%d",&a);
     printf("B= ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("A %d\n",a); printf("B %d",b);
    
}