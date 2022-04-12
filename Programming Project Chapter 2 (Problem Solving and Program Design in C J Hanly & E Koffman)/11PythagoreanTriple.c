#include <stdio.h>

int main (void){
    int m, n;
    int a, b, c;

    printf("Enter the value of m and n => ");
    scanf("%d%d", &m, &n);

    a = m * m - n * n;
    b = 2 * m * n;
    c = m * m + n * n;

    printf("your pythagorean triple is %d, %d, %d.", a, b, c);

    
    return 0;
}