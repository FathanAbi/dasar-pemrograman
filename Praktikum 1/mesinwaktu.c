#include <stdio.h>
#include <math.h>

int main (void)
{
    int x;
    int hari;
    int tahun;

    scanf("%d", &x);

    tahun = x - 1;

    
    
    hari = (tahun * 365 + tahun / 4 - tahun / 100 + tahun / 400) % 7;

    hari = hari + 1;

 

    switch (hari)
    {
        case 0:
        printf("sabtu");
        break;
        case 1: 
        printf("minggu");
        break;
        case 2:
        printf("senin");
        break;
        case 3:
        printf("selasa");
        break;
        case 4:
        printf("rabu");
        break;
        case 5:
        printf("kamis");
        break;
        case 6:
        printf("jumat");
        break;
        case 7:
        printf("sabtu");
        break;
        default:
        printf("Error");

    }


    return 0;
    

    


}