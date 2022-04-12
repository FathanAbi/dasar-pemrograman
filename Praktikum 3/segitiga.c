#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int temp;

    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &temp);

        if(temp % 2 == 1)
        temp = temp - 1;

        arr[i] = temp/2 - 1;
    }

    
    
    int square;

    for(i=0;i<n;i++)
    {
        
        square = 1 + (arr[i]-1)*2 + ((arr[i]-1)*(arr[i]-2))/2;
        
        printf("%d\n", square);
    }

    
}