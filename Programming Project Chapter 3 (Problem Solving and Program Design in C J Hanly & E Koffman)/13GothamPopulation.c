#include <stdio.h>
#include <math.h>

double population(int years){
    double population;
    int year;
    year = years - 1990;
    population = 52.966 + 2.18 * year;
    return population;
}
int main(void){
    int year;
    double pop;

    printf("Enter a year after 1990> ");
    scanf("%d", &year);

    pop = population(year);

    printf("Predicted Gotham City population for %d (in thousands): %.3f", year, pop);

    return 0;


}