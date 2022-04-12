#include <stdio.h>
#include <math.h>

int main(){
    double purchPrice, downPay, totalPay, principal, pay;
    double interest, monthInterest;

    printf("Enter the car purchaase price => ");
    scanf("%lf", &purchPrice);
    printf("Enter down payment => ");
    scanf("%lf", &downPay);
    printf("Enter annual interest rate in percentage => ");
    scanf("%lf", &interest);
    printf("Enter total number of payment => ");
    scanf("%lf", &totalPay);

    principal = purchPrice - downPay;

    monthInterest = interest / 12 / 100;

    pay = monthInterest * principal / (1 - pow((1 + monthInterest), -totalPay));

    printf("The ammount borrowed is $%.2f and the monthly payment is $%.2f", principal, pay);



    return 0;
}