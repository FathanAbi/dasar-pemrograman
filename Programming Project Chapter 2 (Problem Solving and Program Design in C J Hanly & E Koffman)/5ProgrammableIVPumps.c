#include <stdio.h>

int main (void){
    int vtbi, rate, minutes;

    printf("Volume to be infused (ml) => ");
    scanf("%d", &vtbi);

    printf("Minutes over which to infuse => ");
    scanf("%d", &minutes);

    rate = 60 / minutes * vtbi;

    printf("VTBI: %d ml\n", vtbi);
    printf("Rate: %d ml/hr", rate);



    return 0;
}