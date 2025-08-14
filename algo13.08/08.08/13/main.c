#include <stdio.h>
#include <math.h>

int main()
{
     double num, quadrado, cubo;
    printf("informe o valor:");
    scanf("%lf", &num);
    quadrado = pow(num, 2);
    cubo = pow(num, 3);
    printf("o quadrado de %lf é %lf\n", num, quadrado);
    printf("o cubo de %lf é %lf\n", num, cubo);

    return 0;
}
