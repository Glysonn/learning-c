/* 11. Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
a) o produto do dobro do primeiro com metade do segundo ;
b) a soma do triplo do primeiro com o terceiro;
c) o terceiro elevado ao cubo. */

#include <stdio.h>

int main(void)
{
    int num1, num2;
    float num3;
    printf("Digite um número inteiro:\n");
    scanf("%d", &num1);
    printf("Digite outro número inteiro:\n");
    scanf("%d", &num2);
    printf("Digite um número real:\n");
    scanf("%f", &num3);
    printf("O produto do dobro do primeiro com metade do segundo: %d\n", (num1 * num2));
    /*a linha acima deveria ser "printf("%d", (num1*2)*(num2/2));", mas a linguagem C
    está truncando a divisão do num2/2 se o num2 for um número inteiro, assim alterando o resultado. */
    printf("A soma do triplo do primeiro com o terceiro: %.3f\n", (num1 * 3) + num3);
    printf("O terceiro elevado ao cubo: %.3f", (num3 * num3 * num3));
    return 0;
}