#include <stdio.h>
#include <stdlib.h>

int main()
{
       double raio, pi, perimetro, area;
       printf("Escreva o primeiro numero:");
       scanf("%lf", &raio);
       pi = 3.14;
       area = pi * (raio * raio);
       perimetro = 2 * pi * raio;
       printf("o resultado é: %lf, %lf\n", area, perimetro);



    return 0;
}
