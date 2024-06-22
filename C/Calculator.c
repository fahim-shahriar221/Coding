#include<stdio.h>
int main ()
{
    int choice;
    float n1,n2,sum,diff,mul,div; 
    printf("Press '1' to + \n");
    printf("Press '2' to - \n");
    printf("Press '3' to * \n");
    printf("Press '4' to / \n");
    printf("Please make a choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter two numbers: ");
        scanf("%f%f",&n1,&n2);
        printf("Result= %.3f",sum=n1+n2);
    break;
    case 2:
        printf("Enter two numbers: ");
        scanf("%f%f",&n1,&n2);
        printf("Result= %.3f",diff=n1-n2);
    break;
    case 3:
        printf("Enter two numbers: ");
        scanf("%f%f",&n1,&n2);
        printf("Result= %.3f",mul=n1*n2);
    break;
    case 4:
        printf("Enter two numbers: ");
        scanf("%f%f",&n1,&n2);
        printf("Result= %.3f",div=n1/n2);
    break;        
    default:
        printf("Invaild command");
    break;
    }
    return 0;
}
