#include <stdio.h>
#include <math.h>

double getMonthlyPayment(void){
    double purchPrice, downPay, totalPay, principal, pay;
    double interest, monthInterest;

    printf("Enter the Laptop purchaase price => ");
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

    printf("The ammount borrowed is $%.2f and the monthly payment is $%.2f\n", principal, pay);

    return pay;

}

int main(){
    double incomePerHour;
    double price;
    double hour;

    printf("Enter income in dollar per hour => ");
    scanf("%lf", &incomePerHour);

    price = getMonthlyPayment();

    hour = price / incomePerHour;

    hour = ceil(hour);

    printf("Hours needed to pay monthly payment is %.0f hours", hour);


    return 0;
}