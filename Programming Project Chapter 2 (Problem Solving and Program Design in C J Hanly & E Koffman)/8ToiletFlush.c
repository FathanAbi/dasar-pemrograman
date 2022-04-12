#include <stdio.h>

int main (void){
    int population, toilet, totalFlushOld, totalFlushNew, waterSaved, cost;

    printf("Enter city population => ");
    scanf("%d", &population);

    toilet = population / 3;

    totalFlushOld = population * 210;  /*210 from 15 liter/flush * 14 flush/day*/
    totalFlushNew = population * 28; /*28 from 2 liter/flush * 14 flush/day*/

    waterSaved = totalFlushOld - totalFlushNew;
    cost = 150 * toilet;

    printf("The ammount of water saved is %d liter/day and the total isntallation cost is %d dollars", waterSaved, cost);




    return 0;
}