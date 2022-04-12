#include <stdio.h>
#include <math.h>

void instruct(void){
    printf("This is a program to calculate the constant rate of acceleration of a train\ngiven its initial velocity, final velocity, and time interval\nand also to calculate the time it takes the train to come to rest.\n");
}

double findAcceleration(double vi, double vf, double ti){
    double a;
    
    a = (vf - vi) / ti;

    return a;
}

int main(void){
    double vi, vf, ti;
    double dt;
    double a, tr;

    instruct();

    printf("Enter the train intital velocity => ");
    scanf("%lf", &vi);
    printf("Enter the train final velocity => ");
    scanf("%lf", &vf);
    printf("Enter the time interval in secnds => ");
    scanf("%lf", &ti);

    ti = ti / 3600;

    a = findAcceleration(vi, vf, ti);

    tr = (0 - vi) / a;

    tr = tr * 3600;

    printf("The bullet train acceleration is %.2f miles/hour^2 and the time it takes to come to rest is %.2f seconds", a, tr);




    return 0;
}