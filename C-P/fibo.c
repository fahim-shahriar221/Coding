#include<stdio.h>
int main(){
    int f=0,s=1,fibo,count;
    for(count=0; count<10; count++){
        if(count<=1){
            fibo=count;
        }else{
            fibo=f+s;
            f=s;
            s=fibo;
        }printf("%d ",fibo);
    }
}