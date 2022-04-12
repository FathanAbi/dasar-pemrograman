#include <stdio.h>

struct ranting
{
    int a;
    int b;
    int c;
};

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp; 
}

void check(int a, int b, int c)
{
    if(a>b)
    swap(&a, &b);
    if(b>c)
    swap(&b, &c);
    if(a>b)
    swap(&a, &b);

    int status;

    if(a+b>c)

    status = 1;
    else 
    status = 0;

    if(status == 1)
    printf("Yeay, membentuk segitiga!\n");
    else
    printf("Yahh, nggak bisa jadi segitiga :\"(\n");

}

int main(void)
{
    int n;
    scanf("%d", &n);

    struct ranting kelompok[n];


    int i;
    for(i=0; i<n; i++){
        scanf("%d", &kelompok[i].a);
        scanf("%d", &kelompok[i].b);
        scanf("%d", &kelompok[i].c);
    }



    for(i=0;i<n;i++){
        check(kelompok[i].a, kelompok[i].b, kelompok[i].c);
    }


}