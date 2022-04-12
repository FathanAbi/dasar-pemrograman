#include <stdio.h>
#include <math.h>



//https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
unsigned long long powll(unsigned long long x, unsigned long long y, unsigned long long p)
{
    unsigned long long res = 1; 
 
    x = x % p; 
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        
        if (y & 1)
            res = (res*x) % p;
 
        
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}

int main (void)
{
    unsigned long long a[3000000];
    unsigned long long i = 0;

    while (i < 3000000 && (scanf("%llu", &a[i])) == 1) { i++; }
    
    unsigned long long n = i;

    unsigned long long b[n/3][3];
    unsigned long long j;

        
    for(i=0;i<n/3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[3*i + j];
        }
    }
    
    
    

    for(i=0;i<n/3;i++)
    {
        printf("%llu\n", powll(b[i][0], b[i][1], b[i][2]));
    }
        
}