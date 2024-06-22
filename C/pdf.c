#include<stdio.h>
int main(){
    int total = 0;
    int counter = 0;
    int grade;
printf("Enter grade (-1 to stop): ");
scanf("%d", &grade);
while (grade != -1)
{
    total+=grade;
    counter++;
    printf("Enter grade (-1 to stop): ");
    scanf("%d", &grade);
}
    if (counter!=0){
        float average;
        average=(float) total/counter;
        printf("Average %.2f",average);
        
    }else 
        printf("No grades\n");
        
    return 0;
}