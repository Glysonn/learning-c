// 4. Faça um Programa que peça as 4 notas bimestrais e mostre a média.
#include <stdio.h>

int main(void)
{
    float n1, n2, n3, n4, media;
    printf("Digite sua nota 1:\n");
    scanf("%f", &n1);
    printf("Digite sua nota 2:\n");
    scanf("%f", &n2);
    printf("Digite sua nota 3:\n");
    scanf("%f", &n3);
    printf("Digite sua nota 4:\n");
    scanf("%f", &n4);

    printf("Sua média final é: %f", (n1 + n2 + n3 + n4) / 4);
    return 0;
}