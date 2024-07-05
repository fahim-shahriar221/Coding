#include<stdio.h>
int main (){
int n,m,i,max=0; 
printf("How many numbers: ");
scanf("%d",&n);
printf("Numbers are: ");
for (i=1;i<=n;i++){
    scanf("%d",&m);
    if (m>max)
        max=m;
}
    printf("Largest number is %d",max);

return 0;
}