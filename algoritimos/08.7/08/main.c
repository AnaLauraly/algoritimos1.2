#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distancia, tempo, vm;
    printf("informe a distancia:");
    scanf("%lf", &distancia);
    printf("informe o tempo gasto:");
    scanf("%lf", &tempo);
    vm = distancia / tempo;
    printf("a velocidade media é: %2.lf", vm);


    return 0;
}
