// 7. Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.
#include <stdio.h>

int main(void)
{
    int quadrado, areaquadrado;
    printf("Digite o tamanho dos lados do quadrado:\n");
    scanf("%d", &quadrado);
    areaquadrado = quadrado * quadrado;
    printf("A área do quadrado é: %d \n", areaquadrado);
    printf("O dobro da área do quadrado é: %d", areaquadrado * 2);
    return 0;
}