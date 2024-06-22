#include<stdio.h>
#include<math.h>
int main ()
{
    int option;
    float height,width,length,radius,base,area;
    printf("1.Area of a rectangle\n");
    printf("2.Area of a triangle\n");
    printf("3.Area of a cirle\n");
    printf("4.Area of a square\n");
    printf("Choose an option: ");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Enter length and width: ");
        scanf("%f%f",&length,&width);
        printf("Area= %.3f",area=length*width);
    break;
    case 2:
        printf("Enter base and height: ");
        scanf("%f%f",&base,&height);
        printf("Area= %.3f",area=.5*base*height);
    break;
    case 3:
        printf("Enter radius: ");
        scanf("%f",&radius);
        printf("Area= %.3f",area=3.1416*radius*radius);    
    break; 
    case 4:
        printf("Enter length or width: ");
        scanf("%f",&length);
        printf("Area= %.3f",area=pow(length,2));
    break;       
    default:
        printf("Invaid command\n");
        break;
    }
    
    return 0;
}