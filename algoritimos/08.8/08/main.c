#include <stdio.h>
#include <stdlib.h>

int main()
{
    double custo, distribuidor, imposto, p1=28, p2=45, resultado;
    printf("informe o custo carro:");
    scanf("%lf",&custo);
    distribuidor = custo * p1 / 100;
    imposto = custo * p2 / 100;
    resultado = custo + distribuidor + imposto;
    printf("o resultado �: %lf", custo);
    printf("o resultado �: %lf", resultado);

    return 0;
}
