#include <stdio.h>
#include <math.h>

void instuct(void){
    printf("This program will calculate the cost of the house after 5 years\ngiven its initial cost, annual fuel cost, and annual tax rate.");
}

int main(void){
    double initial, fuel, tax;
    double total;

    instuct();

    printf("Enter the ouse initial price => ");
    scanf("%lf", &initial);
    printf("Enter the annual fuel cost => ");
    scanf("%lf", &fuel);
    printf("Enter annual tax rate in percentage => ");
    scanf("%lf", &tax);

    fuel = 5 * fuel;
    tax = tax / 100 * initial * 5;

    total = initial + fuel + tax;

    printf("The total cost of the house after 5 years is $%.2f", total);


    return 0;
}