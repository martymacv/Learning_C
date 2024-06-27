#include <stdio.h>
int main(void){
    short a = -5;
    int b = 10;
    float c = 5.4f;
    double d = -6.5;

    int res_1 = a + b;     // повышение типа
    short res_2 = 100 - a; // понижение типа
    float res_3 = 5.4 - c; // понижение типа
    double res_4 = d * 4;  // 
    
    int res_5 = 7 / 2;
    double res_6 = -9 / 2;
    float res_7 = a / c;
    double res_8 = d / b;

    double res_9 = (double)a / (double)b;
    double res_10 = 7.0 / 2.0;

    return 0;
}
