/* 14. João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o
rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido
pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.
Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que
João deverá pagar. Imprima os dados do programa com as mensagens adequadas. */

#include <stdio.h>
int main(void)
{
    int peso;
    float multa;
    float excesso;
    printf("Digite o peso(em kg): \n");
    scanf("%d", &peso);
    // printf("%d", peso);
    if (peso > 50)
    {
        excesso = peso - 50;
        multa = (excesso * 4);
        printf("Peso: %d %s\n", peso, "kg");
        printf("Excesso: %.2f %s\n", excesso, "kg");
        printf("Multa: %s %.2f", "R$", multa);
    }
    else
    {
        excesso = 0;
        multa = 0;
        printf("Peso: %d %s\n", peso, "kg");
        printf("Excesso: %.2f %s\n", excesso, "kg");
        printf("Multa:%s %.2f\n", "R$", multa);
    }
    return 0;
}