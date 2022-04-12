#include <stdio.h>

int main (void){
    double t, T;

    printf("Enter the elapsed time since power failures in hours => ");
    scanf("%lf", &t);

   
    T = 4 * t * t / (t + 2) - 20;

   

    printf("The estimate temperaturs is %f degree celcius", T);

    return 0;


}