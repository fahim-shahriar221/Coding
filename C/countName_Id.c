#include<stdio.h>
int countchar(char *str){
    int count=0;
    while(*str++) count++;
    return count;
}
int countchar2(int *str){
    int count=0;
    while(*str++) count++;
    return count;
}
int main(){
    char name[100];
    printf("Enter your name: ");
    gets(name);
    printf("Total character= %d",countchar(name));

    int ID[100]
    printf("\nEnter your ID(must be digit): ");
    gets(ID)
    printf("Total character= %d",countchar2(ID));

    char uni[100];
    printf("\nEnter uni name: ");
    gets(uni);
    printf("Total character= %d",countchar(uni));
    
    char dept[100];
    printf("\nEnter dept name: ");
    gets(dept);
    printf("Total character= %d",countchar(dept));

    return 0;

}