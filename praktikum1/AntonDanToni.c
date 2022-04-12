#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g;
    int p, q, r, x, y, z;
    
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

    p = a ^ b;
    q = p ^ c;
    r = q ^ d;
    x = r ^ e;
    y = x ^ f;
    z = y ^ g;

    if (z % 2 == 1){
        printf("Anto");
    } else {
        printf("Toni");
    }

    return 0;
}