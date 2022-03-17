/* 12. Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando
a seguinte fórmula: (72.7*altura) - 58 */
#include <stdio.h>
int main(void)
{
    float altura, pesoIdeal;
    printf("Insira sua altura (em metros): \n");
    scanf("%f", &altura);
    printf("Sua altura: %.2f %s", altura, "m\n");
    printf("Seu peso ideal é: %.2f %s", (72.7 * altura) - 58, "kg");
    return 0;
}