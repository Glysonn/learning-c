// 5. Faça um Programa que converta metros para centímetros.
#include <stdio.h>

int main(void)
{
    float num;
    printf("Digite a quantidade (em metros): ");
    scanf("%f", &num);

    int cm = num * 100;
    printf("Resultado: %d %s", cm, "cm");
    return 0;
}