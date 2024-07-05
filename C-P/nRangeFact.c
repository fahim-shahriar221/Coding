#include<stdio.h>
int main() {
    int i,n;
    long long int fact = 1;

    printf("Enter range: ");
    scanf("%d",&n);
    printf("0! = %lld",fact);

    for (i=1; i<=n; i++)
    {
        fact = fact * i;
        printf("\n%d! = %lld ",i,fact);
    }
        return 0;
}