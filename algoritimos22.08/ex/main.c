#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("informe o primeiro numero:");
    scanf("%d", &n1);
    printf("informe o segundo numero:");
    scanf("%d", &n2);
    if(n1 > n2){
        printf("os numeros sao: %d %d", n2, n1);
    }
    if(n1 < n2){
        printf("os numeros sao: %d %d", n1, n2);
    }
    return 0;
}
