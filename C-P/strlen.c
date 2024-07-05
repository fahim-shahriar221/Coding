#include<stdio.h>
#include<string.h>
int countCharacters(char name[]) {
    int count = 0;
    count=strlen(name);
    puts(strupr(name));
    return count;
}
int countCharacters2(int id []) {
    int count = 0;
    count=strlen(id);
    return count;
}
    int main() {
    char name[100];
    printf("Enter a your name: ");
    gets(name);
    printf("Uppercase of name is : ");
    printf("Number of characters of name : %d\n", countCharacters(name));

    int ID[100];
    printf("Enter a your ID: ");
    gets(ID);
    printf("Number of characters of ID : %d\n", countCharacters2(ID));
    return 0;

}