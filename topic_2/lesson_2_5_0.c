#include <stdio.h>

int main(void)
{
    char byte1 = '0', byte2 = '0';

    int res1 = scanf("%c", &byte1);
    int res2 = scanf("%c", &byte2);
    printf("res1 = %d, res2 = %c\n", byte1, byte2);

    int res = scanf("%c%c", &byte1, &byte2);
    printf("res = %d, byte1 = %c, byte2 = %c\n", res, byte1, byte2);

    int res = scanf("%c %c", &byte1, &byte2);
    printf("res = %d, byte1 = %c, byte2 = %c\n", res, byte1, byte2);
    
    int res = scanf("%c,%c", &byte1, &byte2);
    printf("res = %d, byte1 = %c, byte2 = %c\n", res, byte1, byte2);
    
    int res = scanf("%c; %c", &byte1, &byte2);
    printf("res = %d, byte1 = %c, byte2 = %c\n", res, byte1, byte2);

    long long var_lli = 0;
    double var_d = 0.0;
    int res = scanf("%*llu %lld %lf", &var_lli, &var_d);
    printf("res = %d, var_lli = %lld, var_d = %.2f\n", res, var_lli, var_d);

    return 0;
}
