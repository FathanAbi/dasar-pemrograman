#include <stdio.h>
#define GRAVITATIONAL_CONSTANT 9.8
#define EFFICIENCY 0.9

int main (void){
    double height, flow, power;

    printf("Enter dam's height => ");
    scanf("%lf", &height);
    printf("Enter water flow rate in cubic meter per seconds => ");
    scanf("%lf", &flow);

    power = EFFICIENCY * 1000 * GRAVITATIONAL_CONSTANT * height * flow / 1e6;

    printf("The power generated is %f megawatts", power);

    return 0;
}

/*Sample run
Enter dam's height => 170
Enter water flow rate in cubic meter per seconds => 1.3e3
The power generated is 1949.220000 megawatts
 */