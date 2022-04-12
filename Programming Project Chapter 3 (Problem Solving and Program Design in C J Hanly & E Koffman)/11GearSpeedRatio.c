#include <stdio.h>
#include <math.h>

double speeds_ratio (double max, double min){
    double ratio;
    ratio = pow(max / min, 1.0 / 5.0);
    return ratio;
}

int main(void){
    double max, min;
    double ratio;

    printf("Enter gear's maximum speed in rpm => ");
    scanf("%lf", &max);
    printf("Enter gear's minimum speed in rpm => ");
    scanf("%lf", &min);

    ratio = speeds_ratio(max, min);

    printf("The ratio between successive speeds of six-speed gearbox\nwith maximum speed %.0f rpm and minimum speed %.0f\nrpm is %f", max, min, ratio);


    return 0;


}