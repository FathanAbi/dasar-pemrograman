#include <stdio.h>
#include <string.h>

unsigned long long FPB(unsigned long long x, unsigned long long y)
{
    if (x == 0){
        return y;
    }
    return FPB(y % x, x);
}

unsigned long long KPK(unsigned long long x, unsigned long long y)
{
    return x * y / FPB(x, y);
}

int main (void)
{
    unsigned long long n;
    scanf("%llu", &n);

    
    unsigned long long array[n];

    unsigned long long i;
    for(i = 0; i < n ; i++)
    {
        scanf("%llu", &array[i]);
    }

    char hari[50];
    scanf("%s", hari);

    
    unsigned long long countHari = 0;

    if (strcmp(hari, "Minggu") == 0){
        countHari = 0;
    } else if (strcmp(hari, "Senin") == 0){
        countHari = 1;
    } else if (strcmp(hari, "Selasa") == 0){
        countHari = 2;
    } else if (strcmp(hari, "Rabu") == 0){
        countHari = 3;
    } else if (strcmp(hari, "Kamis") == 0){
        countHari = 4;
    } else if (strcmp(hari, "Jumat") == 0){
        countHari = 5;
    } else if (strcmp(hari, "Sabtu") == 0){
        countHari = 6;
    }


    
    
    unsigned long long result = array[0];
    
    for (i = 1; i < n; i++)
    {
        result = KPK(result, array[i]);
    }

    
    
    
    countHari = result + countHari;

    countHari = countHari % 7;

    

    switch (countHari)
    {
        case 0:
        printf("Minggu");
        break;
        case 1:
        printf("Senin");
        break;
        case 2:
        printf("Selasa");
        break;
        case 3:
        printf("Rabu");
        break;
        case 4:
        printf("Kamis");
        break;
        case 5:
        printf("Jumat");
        break;
        case 6:
        printf("Sabtu");
        break;
        
    }

   

    return 0;
}