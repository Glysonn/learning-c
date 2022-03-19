// 5. Faça um Programa que converta metros para centímetros.
#include <stdio.h>

int main(void)
{
    // declarando a variável e pedindo um valor para ela.
    float num;
    printf("Digite a quantidade (em metros): ");
    scanf("%f", &num);

    // criando uma variável com a fórmula de conversão e realizando o cálculo.
    int cm = num * 100;

    // imprimindo resultado da conversão.
    printf("Resultado: %d %s", cm, "cm");
    return 0;
}