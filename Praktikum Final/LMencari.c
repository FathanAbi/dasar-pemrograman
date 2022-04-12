#include <stdio.h>

struct nomor{
    int k;
    int array1[10000];
    int array2[10000];
};

int main(void)
{
    int n;
    scanf("%d", &n);

    struct nomor kasus[n];

    int i, j;
    for(i=0;i<n;i++){
        scanf("%d", &kasus[i].k);

        for(j=0;j<kasus[i].k-1;j++){
            scanf("%d", &kasus[i].array1[j]);
        }

        for(j=0;j<kasus[i].k;j++){
            scanf("%d", &kasus[i].array2[j]);
        }
    }
    
    long long sum1=0;
    long long sum2=0;
    long long result;

    for(i=0;i<n;i++){
        for(j=0;j<kasus[i].k-1;j++){
            sum1 += kasus[i].array1[j];
        }
        for(j=0;j<kasus[i].k;j++){
            sum2 += kasus[i].array2[j];
        }

        result = sum2 - sum1;
        printf("%lld\n", result);

        sum1=0;
        sum2=0;
    }
    
}

