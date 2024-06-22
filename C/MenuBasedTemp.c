#include<stdio.h>
int main()
{
    float temp,ConvertedTemp;
    int choice;
    char ch;
    printf("Enter any letter to open Menu: ");
    scanf("%c",&ch);
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Celsius to Kelvin\n");
    printf("3.Fahrenheit to Celsius\n");
    printf("4.Fahrenheit to Kelvin\n");
    printf("5.Kelvin to Celsius\n");
    printf("6.Kelvin to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("You chose option 1\n");
        printf("Now enter a Celsius value: ");
        scanf("%f",&temp);
        ConvertedTemp=(((9*temp)/5)+32);
        printf("Fahrenheit value: %.3f\n",ConvertedTemp);
    break;
    case 2:
        printf("You chose option 2\n");
        printf("Now enter a Celsius value: ");
        scanf("%f",temp);
        printf("Kelvin value: %.3f\n",ConvertedTemp=temp+273);
    break;
    case 3:
        printf("You chose option 3\n");
        printf("Now enter a Fahrenheit value: ");
        scanf("%f",temp);
        ConvertedTemp=((temp-32)/9)*5 ;
        printf("Celsius value: %.3f\n",ConvertedTemp);
    break;
    case 4:
        printf("You chose option 4\n");
        printf("Now enter a Fahrenheit value: ");
        scanf("%f",&temp);
        printf("Kelvin value: %.3f\n",ConvertedTemp=(((temp-32)/9)*5)+273);
    break;
    case 5:
        printf("You chose option 5\n");
        printf("Now enter a Kelvin value: ");
        scanf("%f",&temp);
        printf("Celsius value: %.3f\n",ConvertedTemp=temp-273);
    break;
    case 6:
        printf("You chose option 6\n");
        printf("Now enter a Kelvin value: ");
        scanf("%f",&temp);
        printf("Fahrenheit value: %.3f",ConvertedTemp=(((temp-273)/5)*9)+32);    
    break;        
    default:
        printf("Please choose a right number\n");
    break;    
        
    }
    return 0;
}