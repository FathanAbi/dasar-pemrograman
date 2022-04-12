#include <stdio.h>

int main (void){
    double lengthYard, widthYard,
           lengthHouse, widthHouse,
           areaYard, areaHouse,
           areaGrass, time;
    
    printf("Enter yard's length in foot => ");
    scanf("%lf", &lengthYard);
    printf("Enter yard's width foot => ");
    scanf("%lf", &widthYard);

    printf("Enter house's length foot => ");
    scanf("%lf", &lengthHouse);
    printf("Enter house's width foot => ");
    scanf("%lf", &widthHouse);

    areaYard = lengthYard * widthYard;
    areaHouse = lengthHouse * widthHouse;

    areaGrass = areaYard - areaHouse;
    time = areaGrass / 2;

    printf("time required is %.0f seconds", time);

    return 0;
}