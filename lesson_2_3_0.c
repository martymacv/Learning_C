#include <stdio.h>

int main(void)
{
    int value1 = getchar();
    int value2 = getchar();

    int res = putchar(value1);
    printf("\n%d\n", res);

    printf("%c %c\n", value1, value2);

    return 0;
}
