// 3. Faça um Programa que peça dois números e imprima a soma.
#include <stdio.h>

int main(void)
{
    // declarando as variáveis.
    float num1, num2;

    // pedindo ao usuário para colocar os dois números para serem somados.
    printf("Digite o valor do primeiro número:\n");
    scanf("%f", &num1);
    printf("Digite o valor do segundo número:\n");
    scanf("%f", &num2);

    // imprimindo a soma dos números.
    printf("Resultado:");
    printf("%f", num1 + num2);
    return 0;
}