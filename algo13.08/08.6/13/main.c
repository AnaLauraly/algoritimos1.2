#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y, resultado;
    printf("informe o valor de x:");
    scanf("%lf", &x);
    printf("informe o valor de y:");
    scanf("%lf", &y);
    resultado = pow(x, y);
    printf("resultado: %.2lf\n", resultado);

    return 0;
}
