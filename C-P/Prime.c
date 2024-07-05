#include<stdio.h>
int main (){
    int i,n,c=0,t=0,s=0;
    for (n=1; n<=100; n++){
        c=0;
        if (n<=1){
            c=1;
        }else{
        for(i=2; i<=n/2; i++){
            if (n%i==0){
                c=1;
                break;
            }
        }
    }
        if (c==0){
            printf("%d ",n);
            t++;
            s=s+n;
        }
    }
    printf("\n\nTotal prime number: %d",t);
    printf("\nSum: %d",s);
    
     return 0;
}