/* 9Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.
C = 5 * ((F-32) / 9). */
#include <stdio.h>

int main(void)
{
    float tempf, tempc;
    printf("Insira a temperatura em Fahrenheit:\n");
    scanf("%f", &tempf);
    tempc = 5 * ((tempf - 32) / 9);
    printf("%.1f %s %.1f %s", tempf, "ºF  é igual a ", tempc, "ºC");
    return 0;
}