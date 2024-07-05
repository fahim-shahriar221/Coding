#include<stdio.h>
int main(){
    char word[1000];
    int i,count=0;
    printf("Write down your aim in life in 100 words:\n");
    gets(word);
for (i=0; word[i]!='\0'; i++)
    {
        if (word[i]== ' ' ){
            count++;
        }
    }
    if (count<=100){
    printf("\n\n\nThe string has %d words\n", count+1);
    }else
    {
        printf("\n\n\nIt has %d words that is more than 100",count+1);
    }
    return 0;
}