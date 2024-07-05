#include <stdio.h>

int main() {
    int num = 1, limit, i;
    float sum = 0.0, fact;

    printf("Enter Limit: ");
    scanf("%d", &limit);

    while (num <= limit) {
        fact = 1;
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        sum += fact / num;
        num++;
    }

    printf("Sum of the series: %.2f\n", sum);
    return 0;
}