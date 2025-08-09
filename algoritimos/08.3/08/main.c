#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, x, viveu;
    printf("coloque sua idade:");
    scanf("%d", &idade);
    x = 365;
    viveu = idade * x;
    printf("voce viveu: %d\n", viveu);
    return 0;
}
