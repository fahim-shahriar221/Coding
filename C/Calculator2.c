#include<stdio.h>
int main ()
{
    double n1,n2;
    char op;
    printf("Enter any operator(+,-,*,/): ");
    scanf("%c",&op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1,&n2);

    switch (op)
    {
    case '+' :
        printf("%lf + %lf = %.3lf",n1,n2,n1+n2);
    break;
    case '-' :
        printf("%lf - %lf = %.3lf",n1,n2,n1-n2);
    break;
    case '*' :
        printf("%lf * %lf = %.3lf",n1,n2,n1*n2);
    break;
    case '/' :
         printf("%lf / %lf = %.3lf",n1,n2,n1/n2);
    break;     
    default:
       printf("Enter a vaild operator");
        break;
    }
    return 0;
}