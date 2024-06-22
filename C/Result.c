#include<stdio.h>
int main ()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);
    if (marks>100 || marks<0)
        printf("Invalid Number");
    else if (marks>=80)
        printf("A+");  
    else if (marks>=70)
        printf("A");
    else if (marks>=60)
        printf("A-");
    else if (marks>=50)
        printf("B");
    else if (marks>=40)
        printf("C");
    else 
        printf("Fail");      
    return 0;
}