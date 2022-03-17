// 2. Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].
#include <stdio.h>

int main(void)
{
    int numero = 0;
    printf("Por favor, digite um número:\n");
    scanf("%d", &numero);

    printf("O número informado foi: %d", numero);
    return 0;
}