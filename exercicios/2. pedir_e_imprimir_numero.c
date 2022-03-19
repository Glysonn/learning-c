// 2. Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].
#include <stdio.h>

int main(void)
{
    float numero = 0;
    printf("Por favor, digite um número:\n");
    scanf("%f", &numero);

    printf("O número informado foi: %f", numero);
    return 0;
}