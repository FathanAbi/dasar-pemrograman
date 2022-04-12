#include <stdio.h>

int main (void){
    double beginning, ending, distance, fare;

    printf("TAXI FARE CALCULATOR\n");

    printf("Enter beginning odometer reading=> ");
    scanf("%lf", &beginning);

    printf("Enter ending odometer reading=> ");
    scanf("%lf", &ending);

    distance = ending - beginning;

    fare = distance * 1.50;

    printf("You traveled a distance of %.1f miles. At $1.50 per mile,\nyour fare is $%.2f.", distance, fare);


    return 0;
}