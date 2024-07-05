#include<stdio.h> 
int main()
{
    int option;
    char ch;
    int n;
    printf("1.ASCII character to ASCII code\n");
    printf("2.ASCII code to ASCII character\n");
    printf("Enter your choice: ");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
       
        printf("Enter any Character: ");
        scanf(" %c",&ch);
        printf("ASCII code: %d",ch);
    break;
    case 2:
        
        printf("Enter any ASCII code: ");
        scanf("%d",&n);
        printf("ASCII character: %c",n);
    break;
    default:
        printf("Invalid command");    

}
}