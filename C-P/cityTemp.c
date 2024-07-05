#include <stdio.h>
int main() {
    
    int city1[7], city2[7];
    int i,temp;
    float t1=0,t2=0,avg1=0,avg2=0;
    printf("Enter temperature\n");
    for(i=0;i<7;i++){
        printf("City [1] Day [%d]: ",i+1);
        scanf("%d",&temp);
        city1[i] = temp;
        t1 +=temp;
        avg1= t1/7;
    }
    for(i=0;i<7;i++){
        printf("City [2] Day [%d]: ",i+1);
        scanf("%d",&temp);
        city2[i] = temp;
        t2 +=temp;
        avg2= t2/7;
    }
    printf("\nOutput: \n");
    for(i=0;i<7;i++){
        printf("\nCity [1] Day [%d]: %d",i+1,city1[i]);
    }
    for(i=0;i<7;i++){
        printf("\nCity [2] Day [%d]: %d",i+1,city2[i]);
    }
    printf("\n\nAverage temperature of City[1]=%.3f",avg1);
    printf("\nAverage temperature of City[2]=%.3f",avg2);
}