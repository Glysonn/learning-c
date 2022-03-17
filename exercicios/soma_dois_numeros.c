// 3. Faça um Programa que peça dois números e imprima a soma.
#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Digite o valor do primeiro número:\n");
    scanf("%d", &num1);
    printf("Digite o valor do segundo número:\n");
    scanf("%d", &num2);
    printf("Resultado:");
    printf("%d", num1 + num2);
    return 0;
}