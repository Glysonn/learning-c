// 6. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
#include <stdio.h>

int main(void)
{
    // declarando a variável do raio e atribuindo um valor input nela.
    float r;
    printf("Qual o raio do círculo?\n");
    scanf("%f", &r);

    // calculando a área do círculo e imprimindo.
    float area = 3.1415926 * (r * r);
    printf("%s %.4f\b %s", "A área é aproximadamente: ", area, "m²");
    return 0;
}