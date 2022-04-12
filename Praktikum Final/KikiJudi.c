#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
int bubbleSort(int arr[], int n)
{
   int i, j, count = 0;
   for (i = 0; i < n-1; i++)     
 
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1]){
               swap(&arr[j], &arr[j+1]);
               count++;

           }

    return count;
              
}

struct card{
    int n;
    int card[1000];
};

int main(void)
{
    struct card set[1000];

    int i, j;
    for(i=0;i<10000;i++){
        scanf("%d", &set[i].n);
        if(set[i].n == 0) break;

        for(j=0;j<set[i].n;j++){
            scanf("%d", &set[i].card[j]);
        }
    }

    int total=i;
    

    
    
    int count[10000];
    for(i=0;i<total;i++){
        count[i] = bubbleSort(set[i].card, set[i].n);
    
    }

    for(i=0;i<total;i++){
        printf("minimal pertukaran : %d\n", count[i]);
    }

    

    

}
