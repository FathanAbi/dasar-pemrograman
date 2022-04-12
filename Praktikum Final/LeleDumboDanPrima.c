#include <stdio.h>
#include <math.h>

long long isPrime(long long n)
{
    long long i, flag = 1;
 
    
 
    // Iterate from 2 to sqrt(n)
    for (i = 2; i <= sqrt(n); i++) {
 
        // If n is divisible by any number between
        // 2 and n/2, it is not prime
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if (n <= 1)
        flag = 0;
 
    if (flag == 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(void)
{
    long long m, n;
    scanf("%lld %lld", &m, &n);
    
    long long a, b, k;
    int flag = 0;

    long long i, j;
    for(i=m;i<=n;i++){
        a = i;
        if(isPrime(a) == 0) continue;
        for(j=m;j<=n;j++){
            b = j;
            if(isPrime(b) == 0) continue;
            if(b<10){
                k = a * 10 + b;

                if(isPrime(k) == 1){
                    printf("%lld %lld\n", a, b);
                    flag = 1;
                }
            } else if (b<100) {
                k = a * 100 + b;
                if(isPrime(k) == 1){
                    printf("%lld %lld\n", a, b);
                    flag = 1;
                }
            } else if (b<1000) {
                k = a * 1000 + b;
                if(isPrime(k) == 1){
                    printf("%lld %lld\n", a, b);
                    flag = 1;
                }
            } else if (b<10000) {
                k = a * 10000 + b;
                if(isPrime(k) == 1){
                    printf("%lld %lld\n", a, b);
                    flag = 1;
                }
            } else if (b<100000) {
                k = a * 100000 + b;
                if(isPrime(k) == 1){
                    printf("%lld %lld\n", a, b);
                    flag = 1;
                }
            }

        }
    }

    if(flag == 0){
        printf("TIDAK ADA");
    }
}
