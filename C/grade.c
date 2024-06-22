#include<stdio.h>
int grade(int marks){
    int q,a,p,m,att,f
     if (marks>100 || marks<0)
        printf("Invalid Number");
    else if (marks>=80)
        printf("A+");  
    else if (marks>=70)
        printf("A");
    else if (marks>=60)
        printf("A-");
    else if (marks>=50)
        printf("B");
    else if (marks>=40)
        printf("C");
    else 
        printf("Fail");      
    return 0;
}
int main(){
    int m1,m2,m3;
    printf("Enter marks1:");
    scanf("%d",&m1);
    printf("Grade - "); grade(m1);
    printf("\nEnter marks2:");
    scanf("%d",&m2);
    printf("Grade - ");grade(m2);
    printf("\nEnter marks3:");
    scanf("%d",&m3);
    printf("Grade - ");grade(m3);

}