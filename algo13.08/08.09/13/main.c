#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, resultado;
    printf("informe o primeiro numero:");
    scanf("%lf", &x);
    printf("informe o segundo numero:");
    scanf("%lf", &y);
    resultado = sqrt(x*y);
    printf("resultado: %.2lf\n", resultado);

    return 0;
}
