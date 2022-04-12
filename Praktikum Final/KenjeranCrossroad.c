#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m, n, t;
    scanf("%d%d%d", &m, &n, &t);
    
    int cycle = t/85;
    int cycleX = t%85 - 25;
    if(cycleX < 0){
        cycleX = 0;
    } 
    
    double car= 12 * cycle + cycleX/5;
    car = ceil(car);
    
   
    
    if(m+1 <= car){
        printf("YES!");
    } else {
        printf("NO!");
    }
    
    int left = m+n+1-car;
    
    if(left>=0)
    printf(" %d", left);
    else
    printf(" 0");
    
    
    
    
    return 0;
}
