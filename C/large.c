#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter num:"); 
    scanf("%d%d%d",&n1,&n2,&n3);
    if (n1>n2 && n1>n3)
        {
            if (n1%2==0)
                printf("Largest num %d is even",n1);
            else
                printf("Largest num %d is odd",n1);    
        }    
    else if (n2>n1 && n2>n3)
        {
             if (n2%2==0)
                printf("Largest num %d is even",n2);
            else
                printf("Largest num %d is odd",n2); 
        }    
    else
        {
             if (n3%2==0)
                printf("Largest num %d is even",n3);
            else
                printf("Largest num %d is odd",n3);
        }    
return 0;
}