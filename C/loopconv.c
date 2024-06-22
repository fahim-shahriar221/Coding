#include<stdio.h>
int main(){
    int grade, counter;
    int total;
    float avg;
    total=0; counter=1;
    do
    {
        printf("Enter grade: ");
        scanf("%d",&grade);
        total+= grade;
        ++counter;
    }while (counter<=10);
    avg = (float) total / 10;
    printf("AVG %f\n",avg);
} 
/* #include<stdio.h>
int main(){
    int grade, counter;
    int total;
    float avg;
    total=0; 
    for (counter=1; counter <=10; counter++){
        printf("Enter grade: ");
        scanf("%d",&grade);
        total+= grade;  
    } 
    avg = (float) total / 10;
    printf("AVG %f\n",avg);
}
*/