#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(void){
    int n;
    double nFact;
    double nMod, nMod2;
    
    printf("Enter an integer => ");
    scanf("%d", &n);

    nMod = 2 * n + 1 / 3;
    nMod2 = sqrt(nMod * PI);

    nFact = pow(n, n) * exp(-n) * nMod2;

    printf("%d! equals approximately %lf", n, nFact);

    return 0;
}