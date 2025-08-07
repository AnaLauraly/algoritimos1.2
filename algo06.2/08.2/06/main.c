#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, soma, div, multi, sub, resto;
    printf("informe o primeiro numero:");
    scanf("%d", &a);
    printf("informe o segundo numero:");
    scanf("%d", &b);
    soma = a + b;
    div = a / b;
    multi = a * b;
    sub = a - b;
    resto = a % b;
    printf("soma: %d\n", soma);
    printf("subtracao: %d\n", sub);
    printf("divisao: %d\n", div);
    printf("multiplicacao: %d\n", multi);
    printf("resto da divisao: %d\n", resto);





    return 0;
}
