#include<stdio.h>
int main (){
    
    int num=1, n, i;
    float sum=0.0, fact;
    printf("Enter Limit: ");
    scanf("%d",&n);
    while(num<=n){
        fact = 1;
        for (i=1; i<=num; i++){
            fact = fact * i;
        }
        sum = sum + (fact/num);
        num++;
    }
    printf("Sum of the series: %.2f\n",sum);
    return 0;
}