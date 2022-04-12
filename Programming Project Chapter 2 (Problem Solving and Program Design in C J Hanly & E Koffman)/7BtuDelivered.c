#include <stdio.h>

int main (void){
    double gallon, barrel, btu, eff;

    printf("Enter numbers of oil in gallon => ");
    scanf("%lf", &gallon);

    printf("Enter efficiency of house oil furnance in percentage => ");
    scanf("%lf", &eff);

    barrel = gallon / 42;

    btu = eff * barrel * 5.8e6;

    printf("The amount of BTU delivered is %f BTU", btu);


    return 0;
}