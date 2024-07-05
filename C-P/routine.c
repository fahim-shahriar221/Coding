#include<stdio.h>
#include<conio.h>
int main(){
    int day;
    printf("\n\nPlease select day: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("Saturday.\nClass routine: 09:00-1:00 ICE113(CL)\t2:30-4:00 MAT101");
        break;
    case 2:
        printf("Sunday.\nClass routine: 08:30-10:00 ICE113\t10:00-11:30 ICE111\t11:30-01:00 GED101\t01:00-04:00 PHY102");
        break;
    case 3:
        printf("Monday.\nHoliday");
        break;
    case 4:
        printf("Tuesday\nClass routine: 10:00-11:30 MAT101\t01:00-02:30 ENG101\t02:30-04-00 PHY101"); 
        break;
    case 5:
        printf("Wednesday.\nClass routine: 08:30-10:00 ICE111\t11:30-01:00 ICE111\t01:00-02:30 GED101\t02:30-04:00 PHY101"); 
        break;
    case 6:
        printf("Thursday.\nHoliday"); 
        break;       
    case 7:
        printf("Friday.\nHoliday");
        break;
    default:
        printf("Invaild (Please select day between 1 to 7)");
        break;    
    }
    getch();
}
