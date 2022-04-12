#include <stdio.h>

int FPB(int x, int y)
{
    if (y == 0){
        return x;
    }
    return FPB(y, x % y);
}

int main (void)
{
    int n;
    scanf("%d", &n);

    int array[n];
    
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }



    int result = array[0];
 

    for (i = 1; i < n - 1; i++)
    {
        result = FPB(result, array[i]);
    }

    printf("%d", result);
}