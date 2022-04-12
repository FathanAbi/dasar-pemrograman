#include <stdio.h>
#include <math.h>

double getCases(double day){
    double cases;

    cases = 40000 / (1 + 39999 * exp(-0.24681));

    return cases;
}

int main(void){
    int day;
    double cases;

    printf("Enter day number>> ");
    scanf("%d", &day);

    cases = getCases(day);
    

    printf("By day %d, models predicts %f cases total\n", day, cases);

    printf("Enter day number>> ");
    scanf("%d", &day);

    cases = getCases(day);
    

    printf("By day %d, models predicts %f cases total", day, cases);

    printf("Enter day number>> ");
    scanf("%d", &day);

    cases = getCases(day);
    

    printf("By day %d, models predicts %f cases total", day, cases);


    return 0;
    
}