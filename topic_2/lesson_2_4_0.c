#include <stdio.h>

int main(void)
{
    int var_i = 1208;
    printf("value = %d\n", var_i);
    printf("value = %x\n", var_i);
    printf("value = %f\n", var_i);

    double var_d = 1208;
    printf("value = %f\n", var_d);
    printf("value = %d\n", var_d);

    char var_c = 1208;
    printf("value = %d\n", var_c);

    long long var_l = -12345678901234;
    printf("value = %d\n", var_l);
    printf("value = %lld\n", var_l);

    long double var_ld = 5457547.567567;
    printf("value = %f\n", var_ld);
    printf("value = %Lf\n", var_ld);

    printf("var_i = %d, var_l = %lld, var_ld = %Lf\n", var_i, var_l, var_ld);

    printf("[%10d]\n", var_i);
    printf("[%#X]\n", var_i);
    printf("[%-10d]\n", var_i);
    printf("[%10.5d]\n", var_i);
    printf("[%10f]\n", var_d);
    printf("[%-10f]\n", var_d);
    printf("[%5.5f]\n", var_Lf);
    printf("[%+.5f]\n", var_Lf);

    return 0;
}
