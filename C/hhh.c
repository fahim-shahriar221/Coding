#include<stdio.h>
#include<string.h>
int countCharacter(char name[]){
    int count=0;
    count= strlen(name);
    puts(strupr(name));
    return count;
}
int countCharacter2(int ID[]){
    int count=0;
    count= strlen(name);
    return count;
}
int main (){
    char name[100];
    printf("Enter your name: ");
    gets(name);
    printf("Uppercase: ");
    printf("\nTotal characters in name: %d\n",countCharacter(name));

    int id[100];
    printf("Enter your ID: ");
    gets(id);
    printf("\nTotal characters in ID: %d\n",countCharacter2(ID));
}