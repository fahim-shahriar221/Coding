#include <stdio.h>
#include<math.h>
 
int main() {
 
    int n,i=0,total=0;
    for (n=1; n<=100; n++)
    { 
        printf("%d ",n);
        i++; 
        total=total+n;        
    } 
    printf("\nTotal Numbers= %d",i);
    printf("\nSum = %d",total);

}