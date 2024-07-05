#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    if (n1%2==0)
        printf("%d an even number\n",n1);
    else
        printf("%d is an odd number\n",n1);
    if (n2%2==0)
        printf("%d an even number\n",n2);
    else
        printf("%d is an odd number\n",n2);
    if (n3%2==0)
        printf("%d an even number\n",n3);
    else
        printf("%d is an odd number\n",n3);
    if (n4%2==0)
        printf("%d an even number\n",n4);
    else
        printf("%d is an odd number\n",n4);
    if (n5%2==0)
        printf("%d an even number\n",n5);
    else
        printf("%d is an odd number\n",n5);
    
    return 0;
}