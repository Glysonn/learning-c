// 6. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
#include <stdio.h>

int main(void)
{
    float r;
    printf("Qual o raio do círculo?\n");
    scanf("%f", &r);
    float area = 3.1415926 * (r * r);
    printf("%s %.4f\b %s", "A área é aproximadamente: ", area, "m²");
    return 0;
}