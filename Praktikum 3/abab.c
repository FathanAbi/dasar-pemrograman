#include <stdio.h>
#include <math.h>
#define M 1000000007

long long f(long long k)
{
    long long ans = 1;

    for(int i=1; i<=k;i++)
    {
        ans = (ans % M) * (i % M);
    }

    return ans % M;
}

long long multi(long long a, long long b)
{
    long long ans;
    ans = ((a % M) * (b % M))%M;

    return ans;
}

//https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
long long powll(long long x, unsigned int y, int p)
{
    long long res = 1; 
 
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

long long divide(long long a, long long b)
{
    long long ans = a * powll(b, M-2, M) % M;
    return ans;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n][2];

    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        a[i][1]--;
    }

    
    for(i=0;i<n;i++)
    {
        int A = a[i][0];
        int B = a[i][1];
        int fA, fB;
        long long sum = A + B;
        long long penyebut;
        long long hasil;
       

        sum = f(sum);
        fA = f(A);
        fB = f(B);
        penyebut = multi(fA, fB);
        hasil = divide(sum, penyebut);
        
        printf("%lld\n", hasil);
    }

    
}