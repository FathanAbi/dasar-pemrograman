#include <stdio.h>

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
    int palindromeCheck[n - 1];

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (palindrome(array[i]) == 1)
        palindromeCheck[i] = 1;
        else
        palindromeCheck[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        if (palindromeCheck[i] == 1)
        printf("Mehas pasti suka!\n");
        else
        printf("Jangan ini, deh.\n");
    }

    

    return 0;
}