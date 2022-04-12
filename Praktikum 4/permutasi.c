#include <stdio.h>
#include <string.h>
 

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 

void permute(char *a, int l, int r)
{
    int i;
    if (l == r)
        printf("%s ", a);
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((a+l), (a+i));
            permute(a, l+1, r);
            swap((a+l), (a+i)); 
        }
    }
}

int main()
{
    char string[10];
    scanf("%s", string);

    int n = strlen(string);

    permute(string, 0, n-1);


    return 0;
}