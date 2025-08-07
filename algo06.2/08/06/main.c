#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, x;
    printf("informe o primeiro numero:");
    scanf("%d", &a);
    printf("informe o segundo numero:");
    scanf("%d", &b);
    printf("informe o terceiro numero:");
    scanf("%d", &c);
    x = 2 * ((a - c)/8) - b * 5;
    printf("valor de x: %d\n", x);
    return 0;
}
