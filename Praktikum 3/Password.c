#include <stdio.h>
#include <stdlib.h>


int pattern(int k)
{
   if(k==1)
   {
       printf("%d", 1);
       return 0;
   }

   printf("%d ", k);

   if(k%4 == 0)
   {
       return pattern(k/4);
   }
   else
   return pattern(k+1);

   
}

int main(void)
{
    int k;
    scanf("%d", &k);

    k = pattern(k);
}