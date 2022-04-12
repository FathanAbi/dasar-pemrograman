#include <stdio.h>
#include <math.h>

double celcius_at_depth(double depth){
    double celcius;
    celcius = 10 * depth + 20;

    return celcius;
}

double fahrenheit(double celcius){
    double fahrenheit;
    fahrenheit = 1.8 * celcius + 32;

    return fahrenheit;
}

int main(void){
    double depth;
    double c, f;

    printf("Enter the depth in kilometers => ");
    scanf("%lf", &depth);

    c = celcius_at_depth(depth);

    f = fahrenheit(c);

    printf("The temperatuhe in %f Km is %lf degree celcius or %f degree fahrenheit", depth, c, f);


    return 0;
}