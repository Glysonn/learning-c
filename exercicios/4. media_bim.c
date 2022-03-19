// 4. Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include <stdio.h>

int main(void)
{
    // declarando variáveis.
    float n1, n2, n3, n4;

    // pedindo valores de cada variável ao usuário.
    printf("Digite sua nota 1:\n");
    scanf("%f", &n1);

    printf("Digite sua nota 2:\n");
    scanf("%f", &n2);

    printf("Digite sua nota 3:\n");
    scanf("%f", &n3);

    printf("Digite sua nota 4:\n");
    scanf("%f", &n4);

    // imprimindo o resultado
    // o cálculo da média foi feito no método printf(), por isso não foi necessário criar uma variável para isso.
    printf("Sua média final é: %f", (n1 + n2 + n3 + n4) / 4);
    return 0;
}