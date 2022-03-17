/* 8. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário no referido mês.*/

#include <stdio.h>

int main(void)
{
    float salario, valorHora;
    int horaTrabalhada;
    printf("Quanto você ganha por hora trabalhada? (em reais)\n");
    scanf("%f", &valorHora);
    printf("Quantas horas você trabalha no mês?\n");
    scanf("%d", &horaTrabalhada);
    salario = (valorHora * horaTrabalhada);
    printf("No mês em que você trabalhou %d %s %s %.2f", horaTrabalhada, "horas,", "Você recebeu: R$", salario);
}