#include <stdio.h>
#include <math.h>

int prime(int n)
{
    if (n <= 1)
    return 0;

    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        return 0;
    }

    return 1;
}


int palindrome(int n)    
{    
    int r , sum = 0, temp;
    int result;
   
    temp = n;    
    while ( n > 0)    
    {    
        r = n % 10;    
        sum = (sum * 10) + r;    
        n = n / 10;    
    }    
    if (temp == sum)    
    result = 1;    
    else    
    result = 0;   
    return result; 
}  

int main (void)
{
    int n;
    scanf("%d", &n);

    int array[n - 1];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        while (palindrome(array[i]) == 0 || prime(array[i]) == 0)
        {
            array[i] = array[i] + 1;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("#%d : %d\n", i + 1, array[i]);
    }

    return 0;
}

