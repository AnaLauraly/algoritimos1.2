#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1, n2, n3, nota = 0;
printf("informe a primeira nota:");
    scanf("%d", &n1);
    nota += n1 * 2;
    printf("informe a segunda nota:");
    scanf("%d", &n2);
    nota  += n2 * 3;
    printf("informe a terceira nota:");
    scanf("%d", &n3);
    nota += n3 * 5;
    nota /= 10;
    printf("o resultado é: %d", nota);
    return 0;
}
