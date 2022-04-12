#include <stdio.h>
#include <string.h>


//https://www.javatpoint.com/reverse-a-string-in-c
void revstr(char *str1)  
{   
    int i, len, temp;  
    len = strlen(str1); 
  
    for (i = 0; i < len/2; i++)  
    {  
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
} 

int main(void)
{
    int n;
    scanf("%d", &n);
    char str[n][1000];
    int i;
    for(i=0;i<n;i++)
    {
    scanf("%s", str[i]);
    }


    char str0[n][1000];

    int j;
    for(i = 0;i<n;i++)
    {
        for(j=0;j<1000;j++)
        {
            str0[i][j] = str[i][j];
        }
    }

    

    for(i=0;i<n;i++)
    {
        revstr(str[i]);
    }

    

    for(i=0;i<n;i++)
    {
        if(strcmp(str0[i], str[i]) == 0)
        printf("SELAMAT JOON\n");
        else
        printf("YAH COBA LAGI JOON\n");
    }
    

    

    return 0;
}