#include <stdio.h>

int main (void)
{
    long long uang;
    long long pecahan250 = 0;
    long long pecahan100 = 0; 
    long long pecahan50 = 0;
    long long pecahan20 = 0;
    long long pecahan10 = 0;
    long long pecahan5 = 0;

    scanf("%lld", &uang);

    if(uang != 0){

    if (uang >= 250){
        pecahan250 = uang / 250;
        uang = uang % 250;
    }

    if (uang >= 100){
        pecahan100 = uang / 100;
        uang = uang % 100;
    }

    if (uang >= 50){
        pecahan50 = uang / 50;
        uang = uang % 50;
    }

    if (uang >= 20){
        pecahan20 = uang / 20;
        uang = uang % 20;
    }

    if (uang >= 10){
        pecahan10 = uang / 10;
        uang = uang % 10;
    }

    if (uang >= 5){
        pecahan5 = uang / 5;
        uang = uang % 5;
    }
 

    if (uang == 0){
        printf("%lld lembar 250 ribuan\n", pecahan250);
        printf("%lld lembar 100 ribuan\n", pecahan100);
        printf("%lld lembar 50 ribuan\n", pecahan50);
        printf("%lld lembar 20 ribuan\n", pecahan20);
        printf("%lld lembar 10 ribuan\n", pecahan10);
        printf("%lld lembar 5 ribuan", pecahan5);
    } else {
        printf("Harganya jelek :(");
    }
    } else {
        printf("Harganya jelek :(");
    }
    return 0;

}