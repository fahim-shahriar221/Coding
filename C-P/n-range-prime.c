#include<stdio.h>
int main (){
    int i,j,s,e,c=0;
    printf("Enter the starting number of range: ");
    scanf("%d",&s);
    printf("Enter the ending number of range: ");
    scanf("%d",&e);
     if (s>e){
        printf("Invaild");
        return 1;
    }
    printf("Prime numbers between  %d to %d are :\n",s,e);
   
    for (i=s; i<=e; i++){
        c=0;
        if (i<=1){
            c++;
        }else{
            for(j=2; j<=i/2; j++){
            if (i%j==0){
                c++;
                break;
            }
        }
    }
        if (c==0){
            printf("%d ",i);
        }
    }
     return 0;
}