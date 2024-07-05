#include<stdio.h>
int main(){
    int choice;
    printf("1.RC\n2.7UP\n3.Coca-Cola\n4.Pepsi");
    printf("\n\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("You have ordered RC\tPrice-20taka");
        break;
    case 2:
        printf("You have ordered 7UP\tPrice-25taka");
        break;
    case 3:
        printf("You have ordered Coca-Cola\tPrice-30taka");
        break;
    case 4:
        printf("You have ordered Pepsi\tPrice-25taka");
        break;
    default:
        printf("Invalid command");
        break;
    }
    return 0;
}