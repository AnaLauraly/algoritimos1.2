#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, resultado;
    printf("digite um numero de 3 casas:");
    scanf("%d", &num);8
    resultado = ( num / 10  )% 10;
    printf("o resultado é:%d", resultado);



    return 0;
}
