#include <stdio.h>

int main (void)
{
    int h1, m1, s1;
    int a, b, c;
    int t;
    int h2, m2, s2;
    h2 = 0;
    m2 = 0;
    s2 = 0;

    scanf("%02d:%02d:%02d:", &h1, &m1, &s1);
    scanf("%02d jam %02d menit %02d detik", &a, &b, &c);
    scanf("%d", &t);


    s2 = s1 + c;
    if (s2 >= 60){
        s2 = s2 - 60;
        m2 = m2 + 1;
    }

    m2 = m2 + m1 + b;
    if (m2 >= 60){
        m2 = m2 - 60;
        h2 = h2 + 1;
    }

    h2 = h2 + h1 + a;
    if (h2 >= 24){
        h2 = h2 - 24;
    }

    h2 = h2 + t;
    if(h2 >= 24){
        h2 = h2 -24;
    } else if (h2 < 0){
        h2 = h2 + 24;
    }
    
    printf("Mehas akan sampai pada pukul %d:%d:%d waktu setempat", h2, m2, s2);

}