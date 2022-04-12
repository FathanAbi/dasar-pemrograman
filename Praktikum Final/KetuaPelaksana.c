#include <stdio.h>
#include <string.h>



void swap(int *xp, int *yp) {
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

struct poin{
    char s[101];
    int a;
    int b;
    int c;
    int t;
};

int main(void)
{
    int n;
    scanf("%d", &n);

    struct poin tim[n];

    int i, j;
    for(i=0;i<n;i++){
        scanf("%s", tim[i].s);
        scanf("%d", &tim[i].a);
        scanf("%d", &tim[i].b);
        scanf("%d", &tim[i].c);
        tim[i].t = tim[i].a + tim[i].b + tim[i].c;
    }
    
    int swapped;
    char temp[101];
    for (i = 0; i < n-1; i++) {
      swapped = 0;
      for (j = 0; j < n-i-1; j++) {
         if (tim[j].t > tim[j+1].t) {
            strcpy(temp, tim[j].s);
            strcpy(tim[j].s, tim[j+1].s);
            strcpy(tim[j+1].s, temp);
            swap(&tim[j].a, &tim[j+1].a);
            swap(&tim[j].b, &tim[j+1].b);
            swap(&tim[j].c, &tim[j+1].c);
            swap(&tim[j].t, &tim[j+1].t);
            swapped = 1;
         } else if(tim[j].t == tim[j+1].t && tim[j].a > tim[j+1].a){
            strcpy(temp, tim[j].s);
            strcpy(tim[j].s, tim[j+1].s);
            strcpy(tim[j+1].s, temp);
            swap(&tim[j].a, &tim[j+1].a);
            swap(&tim[j].b, &tim[j+1].b);
            swap(&tim[j].c, &tim[j+1].c);
            swap(&tim[j].t, &tim[j+1].t);
            swapped = 1;
         } else if(tim[j].t == tim[j+1].t && tim[j].a == tim[j+1].a && tim[j].b > tim[j+1].b){
            strcpy(temp, tim[j].s);
            strcpy(tim[j].s, tim[j+1].s);
            strcpy(tim[j+1].s, temp);
            swap(&tim[j].a, &tim[j+1].a);
            swap(&tim[j].b, &tim[j+1].b);
            swap(&tim[j].c, &tim[j+1].c);
            swap(&tim[j].t, &tim[j+1].t);
            swapped = 1;
         } else if(tim[j].t == tim[j+1].t && tim[j].a == tim[j+1].a && tim[j].b == tim[j+1].b && strcmp(tim[j].s, tim[j+1].s) < 0){
            strcpy(temp, tim[j].s);
            strcpy(tim[j].s, tim[j+1].s);
            strcpy(tim[j+1].s, temp);
            swap(&tim[j].a, &tim[j+1].a);
            swap(&tim[j].b, &tim[j+1].b);
            swap(&tim[j].c, &tim[j+1].c);
            swap(&tim[j].t, &tim[j+1].t);
         }
      } 
      if (swapped == 0)
         break;
   }

   for(i=n-1;i>=0;i--){
       printf("%s ", tim[i].s);
       printf("%d ", tim[i].a);
       printf("%d ", tim[i].b);
       printf("%d ", tim[i].c);
       printf("%d\n", tim[i].t);
   }


} 
