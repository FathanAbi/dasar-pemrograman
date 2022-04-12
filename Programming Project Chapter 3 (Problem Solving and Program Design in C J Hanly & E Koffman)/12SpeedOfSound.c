#include <stdio.h>
#include <math.h>

void instruct(void){
    printf("This program will calculate the spped of sound given the temperature\n");
    printf("please enter the temperature in fahrenheit => ");
}

int main(void){
    double T;
    double a;

    instruct();
    scanf("%lf", &T);

    a = 1086 * sqrt((5 * T + 297) / 247);

    printf("The speed of sound is %f ft/sec", a);

    return 0;
}