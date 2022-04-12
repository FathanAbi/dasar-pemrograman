#include <stdio.h>

unsigned long long solve(int a, int b, int k)
{

    if((a*k - 1) % b == 0) return (a*k - 1)/b;
    if(a*k >= 300000000) return 0;
    return solve(a, b, k+1);
}

void check(int a, int b)
{
    unsigned long long result;

    result = solve(a, b, 1);

    if (result == 0)
    printf("Mesinnya nggak pas :\"(\n");
    else
    printf("Bisa dong, tiap orang dapet: %llu\n", result);

}

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n][2];

    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d", &arr[i][j]);
        }
    }



    for(i=0;i<n;i++){
        check(arr[i][0], arr[i][1]);
    }
}