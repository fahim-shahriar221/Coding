#include<stdio.h>
int main(){
char aim[100];
int count=1;
printf("Enter your aim in life: \n"); //getting the string
gets(aim);
for(int i=0;aim[i]!='\0';i++){
     if (aim[i] == ' ') {
            count++;}
}
printf("The number of words are : %d",count); 



return 0;
}