#include <stdio.h>
#include <math.h>
#define M 1000000007

int isPrime(int n)
{
    int i, flag = 1;
 
    
 
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
    int n;
    scanf("%d", &n);

    int a[n][2];
    
    int i, j;
    for(i=0;i<n;i++){
        scanf("%d%d", &a[i][0], &a[i][1]);
    }
    
    unsigned long long result = 1;
    
    

    int p, p0, h;

    for(i=0;i<n;i++){
        result = 1 % M;
        p = a[i][0];
        p0= a[i][0];
        h = a[i][1];
        for(j=1;j<=h;j++){
            if(isPrime(j) == 0){
                result = (result%M) * (p%M);
                if(p > 1){
                    p=p0-1;
                } 
            } else {
                result = (result%M) * (p0%M);
            }
        }
        result = result%M;
        printf("%llu\n", result);
    }

    
}
