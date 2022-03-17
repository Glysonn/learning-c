/* 13. Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule
seu peso ideal, utilizando as seguintes fórmulas:
a) Para homens: (72.7*h) - 58
b) Para mulheres: (62.1*h) - 44.7 */
#include <stdio.h>
int main(void)
{
    char sexo;
    float h, pesoIdeal;
    printf("Você é do sexo masculino (M) ou feminino (F)? ");
    scanf("%c", &sexo);

    if (sexo == 'm' || sexo == 'M')
    {
        printf("Insira sua altura (em metros): \n");
        scanf("%f", &h);
        printf("Sua altura: %.2f %s", h, "m\n");
        printf("Seu peso ideal é: %.2f %s", (72.7 * h) - 58, "kg");
    }
    else if (sexo == 'f' || sexo == 'F')
    {
        printf("Insira sua altura (em metros): \n");
        scanf("%f", &h);
        printf("Sua altura: %.2f %s", h, "m\n");
        printf("Seu peso ideal é: %.2f %s", (62.1 * h) - 44.7, "kg");
    }

    return 0;
}