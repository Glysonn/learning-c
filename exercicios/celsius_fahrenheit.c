// 10. Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.
#include <stdio.h>

int main(void)
{
    float tempf, tempc;
    printf("Insira a temperatura em Celsius:\n");
    scanf("%f", &tempc);
    tempf = (tempc * 9 / 5) + 32;
    printf("%.1f %s %.1f %s", tempc, "ºC  é igual a ", tempf, "ºF");
    return 0;
}