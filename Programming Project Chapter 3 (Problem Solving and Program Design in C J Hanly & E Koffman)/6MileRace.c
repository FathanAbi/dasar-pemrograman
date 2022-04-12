#include <stdio.h>

void instructions(void){
    printf("Enter the minutes after the prompt : Enter the minutes => \n");
    printf("Enter seonds after the prompt : Enter the seconds => \n");
}

int main(void){
    int minutes;
    double seconds, time;
    double speedMPS, speedFPS;

    instructions();

    printf("Enter the minutes => ");
    scanf("%d", &minutes);
    printf("Enter the seconds => ");
    scanf("%lf", &seconds);

    time = minutes * 60 + seconds;

    speedMPS = 1609.344 / time;
    speedFPS = 5280 / time;

    printf("%f", time);

    printf("The speed is %.2f m/s or %.2f ft/s", speedMPS, speedFPS);

    


    return 0;
}