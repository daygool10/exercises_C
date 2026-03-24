#include <stdio.h>

int main (){

    float temp, F;

    printf("digite o valor da temperatura em Celsius: ");
    scanf("%f", &temp);

    F = (temp*1.8) + 32;

    printf("%.1f graus Celsius, equivalem a %.1f graus Fahrenheit", temp, F);


return 0;
}

