#include <stdio.h>

int main(void)
{
    int dec, hex, oct;
    char ch;
    double d1, d2, d3, d4;

    dec = 100;
    dec = 100ULL;
    hex = 0x1FA;
    hex = 0x1FAULL;
    oct = 0123;

    ch = 'd';
    printf("ch = %c, code = %d\n", ch, ch);
    printf("dec = %c, code = %d\n", hex, hex);

    d1 = 10.0f; //f - float
    d2 = -7.;
    d3 = 1e2;   //десять в квадрате
    d4 = 5e-3;  //десять в минус третьей степени
    
    int size = sizeof(int);
    size = sizeof(ch);
    size = sizeof d1;

    return 0;
}
