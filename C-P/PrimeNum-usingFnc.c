#include<stdio.h>
#include<stdbool.h>
bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2; i<=num/2; i++){
        if (num%i==0){
            return false;
        }
    }
      return true;  
    
}
int main(){
    int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        if(isPrime(i))
        printf("%d ",i);
    }
    return 0;
}