#include<stdio.h>
int reverse(int y){
    int a,b,c,d,e,f;
    a=y/1000;
    b=y%1000;
    c=b/100;
    d=b%100;
    e=d/10;
    f=d%10;
    printf("reverse num %d%d%d%d",f,e,c,a);
    printf("\nSum =%d",f+e+c+a);
    if(f>e && f>c && f>a)
    printf("\n%d is large",f);

    else if(e>f && e>c && e>a)
    printf("\n%d is large",e);

    else if(a>e && a>c && a>f)
    printf("\n%d is large",a);

    else
    printf("\n%d is large",c);
return 0;
}
int main(){
    int x;
    printf("enter 4 digit number:");
    scanf("%d",&x);
    reverse(x);
    return 0;
}