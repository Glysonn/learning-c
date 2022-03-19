#include <stdio.h>

int main(void)
{
    float valorHora, quantidadeHora, impostoRenda, inss, sindicato, salarioBruto, salarioLiqui;
    printf("Quantas horas você trabalhou no mês?\n");
    scanf("%f", &quantidadeHora);
    printf("E quanto você recebe por hora trabalhada?\n");
    scanf("%f", &valorHora);
    salarioBruto = quantidadeHora * valorHora;
    impostoRenda = (salarioBruto / 100) * 11;
    inss = (salarioBruto / 100) * 8;
    sindicato = (salarioBruto / 100) * 5;
    salarioLiqui = (salarioBruto - impostoRenda - inss - sindicato);
    printf("\n");
    printf("Salário bruto: R$%.2f\n", salarioBruto);
    printf("Desconto Imposto de Renda: R%.2f\n", impostoRenda);
    printf("Desconto INSS: R$%.2f\n", inss);
    printf("Desconto Sindicato: R$%.2f\n", sindicato);
    printf("Salário líquido: R$%.2f", salarioLiqui);
    return 0;
}

/*
15. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
salário bruto.
a) quanto pagou ao INSS.
b) quanto pagou ao sindicato.
c) o salário líquido.
Calcule os descontos e o salário líquido, conforme a tabela abaixo:
+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$

*/