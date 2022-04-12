#include <stdio.h>

int main (void){
    char grade;
    double minAvgReq, curAvg, finalCounts, scoreNeed, prevCounts;

    printf("Enter desired grade> ");
    scanf("%c", &grade);

    printf("Enter minimum average required> ");
    scanf("%lf", &minAvgReq);

    printf("Enter current average in course> ");
    scanf("%lf", &curAvg);

    printf("Enter how much the final counts as a percentage of the course grade> ");
    scanf("%lf", &finalCounts);

    prevCounts = 1 - finalCounts / 100;

    scoreNeed = (minAvgReq - prevCounts * curAvg) / (finalCounts / 100);

    printf("You need a score of %.2f on the final to get a %c.", scoreNeed, grade);




    return 0;
}