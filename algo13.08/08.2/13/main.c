#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    printf("escreva o dia:");
    scanf("%d", &dia);
    printf("escreva o mes:");
    scanf("%d", &mes);
    printf("escreva o ano:");
    scanf("%d", &ano);
    printf("a data é: %d/%d/%d\n", dia, mes, ano);
    return 0;
}
