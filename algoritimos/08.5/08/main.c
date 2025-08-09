#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    double media;
    printf("informe a primeira nota:");
    scanf("%d", &n1);
    printf("informe a segunda nota:");
    scanf("%d", &n2);
    printf("informe a terceira nota:");
    scanf("%d", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("a media é: %lf", media);
    return 0;
}
