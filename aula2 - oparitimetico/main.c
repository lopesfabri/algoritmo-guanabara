#include <stdio.h>

int main()
{
    int n1, n2;
    double resultado;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    resultado = n1 + n2 / 2;
    printf("O resultado e: %f", resultado);
}