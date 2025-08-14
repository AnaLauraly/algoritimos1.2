#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, dia, mes, ano, aux, data;
printf("digite um numero:");
scanf("%d", &num);
dia = num / 10000;
aux = num % 10000;
mes = aux / 100;
ano = aux % 100;
printf("Dia: %d mes: %d ano: %d", dia, mes, ano);

    return 0;
}
