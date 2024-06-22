#include<stdio.h>
int main (){
    int x=1234,a,b,c,d,e,f;
    a=x/1000;
    b=x%1000;
    c=b/100;
    d=b%100;
    e=d/10;
    f=d%10;
    printf("%d%d%d%d",f,e,c,a);
}