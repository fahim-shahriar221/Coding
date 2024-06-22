#include<stdio.h>
int main(){
    int grade, counter;
int total;
float average;
total = 0;
counter = 1;
while (counter <= 10)
{
    printf("Enter grade: ");
    scanf("%d", &grade);
    total += grade;
    ++counter;
}
average = (float) total / 10;
printf("The average grade is %.2f\n", average);

return 0;
    
}