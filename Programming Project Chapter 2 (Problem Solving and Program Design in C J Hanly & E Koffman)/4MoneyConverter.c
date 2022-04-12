#include <stdio.h>

int main (void){
    double usd, gbp;

    printf("Enter your dollars here => ");
    scanf("%lf", &usd);

    gbp = usd * 0.65;

    printf("%f GBP", gbp);

    return 0;
}