#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numero, porcentagem, resultado;
    printf("informe o valor do numero:");
    scanf("%lf", &numero);
    porcentagem = 4;
    resultado = (numero * porcentagem)/100;
    printf("o resultado é: %lf\n", resultado);

    return 0;
}
