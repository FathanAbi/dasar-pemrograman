#include <stdio.h>

int main (void){
    double v, s, a, t;

    printf("Enter take off speed in km/hr => ");
    scanf("%lf", &v);
    printf("Enter take off distance in meter => ");
    scanf("%lf", &s);

    v = 0.27777777 * v;

    a = v * v / (2 * s);

    t = v / a;

    printf("The jet acceleration during take off is %lf m/s2 and the time during take off is %lf seconds", a, t);

    return 0;
}