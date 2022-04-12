#include <stdio.h>
#include <string.h>

int countVokal(char *string)
{
    int i = 0;
    int count = 0;
    while(string[i] != 0){
        if(string[i] == 'a' || string[i] == 'i' || string[i] == 'u' || string[i] == 'e' || string[i] == 'o' || string[i] == 'A' || string[i] == 'I' || string[i] == 'U' || string[i] == 'E' || string[i] == 'O')
        count ++;

        i++;
    }

    return count;
}

int countKonsonan(char *string)
{
    int i = 0;
    int count = 0;
    while(string[i] != 0){
        if(string[i] == 'b' || string[i] == 'B' || string[i] == 'c' || string[i] == 'C' || string[i] == 'd' || string[i] == 'D' || string[i] == 'f' || string[i] == 'F' || string[i] == 'g' || string[i] == 'G' || string[i] == 'h' || string[i] == 'H' || string[i] == 'j' || string[i] == 'J' || string[i] == 'k' || string[i] == 'K' || string[i] == 'l' || string[i] == 'L' || string[i] == 'm' || string[i] == 'M' || string[i] == 'n' || string[i] == 'N' || string[i] == 'p' || string[i] == 'P' || string[i] == 'q' || string[i] == 'Q' || string[i] == 'r'|| string[i] == 'R' || string[i] == 's' || string[i] == 'S' || string[i] == 't' || string[i] == 'T'|| string[i] == 'v' || string[i] == 'V' || string[i] == 'w' || string[i] == 'W' || string[i] == 'x' || string[i] == 'X' || string[i] == 'y' || string[i] == 'Y'|| string[i] == 'z' || string[i] == 'Z')
        count ++;

        i++;
    }

    return count;
}

int countKapital(char *string)
{
    int i = 0;
    int count = 0;
    while(string[i] != 0){
        if(string[i] == 'A' || string[i] == 'B' ||  string[i] == 'C' || string[i] == 'D' || string[i] == 'E' || string[i] == 'F' ||string[i] == 'G' || string[i] == 'H' || string[i] == 'I' || string[i] == 'J' || string[i] == 'K' || string[i] == 'L' || string[i] == 'M' || string[i] == 'N' || string[i] == 'O' || string[i] == 'P' || string[i] == 'Q'|| string[i] == 'R' ||string[i] == 'S' ||string[i] == 'T' || string[i] == 'U' || string[i] == 'V' || string[i] == 'W' || string[i] == 'X'|| string[i] == 'Y'|| string[i] == 'Z')
        count ++;

        i++;
    }

    return count;
}

int countKecil(char *string)
{
    int i = 0;
    int count = 0;
    while(string[i] != 0){
        if(string[i] == 'a' || string[i] == 'b' ||  string[i] == 'c' || string[i] == 'd' || string[i] == 'e' || string[i] == 'f' ||string[i] == 'g' || string[i] == 'h' || string[i] == 'i' || string[i] == 'j' || string[i] == 'k' || string[i] == 'l' || string[i] == 'm' || string[i] == 'n' || string[i] == 'o' || string[i] == 'p' || string[i] == 'q'|| string[i] == 'r' ||string[i] == 's' ||string[i] == 't' || string[i] == 'u' || string[i] == 'v' || string[i] == 'w' || string[i] == 'x'|| string[i] == 'y'|| string[i] == 'z')
        count ++;

        i++;
    }

    return count;
}

int main(void)
{
    char string[100];
    gets(string);
  

    int vokal;
    int konsonan;
    int kapital;
    int kecil;

    vokal = countVokal(string);
    konsonan = countKonsonan(string);
    kapital = countKapital(string);
    kecil = countKecil(string);


    printf("Jumlah Vokal: %d\n", vokal);
    printf("Jumlah Konsonan: %d\n", konsonan);
    printf("Jumlah Kapital: %d\n", kapital);
    printf("Jumlah Kecil: %d", kecil);
}