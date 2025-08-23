#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("informe o primeiro numero:");
    scanf("%d", &n1);
    printf("informe o segundo numero:");
    scanf("%d", &n2);
    if(n1 % 2 == 0 && n2 % 2 == 0 ){
        printf("ambos os numeros sao pares");
    }
    else if(n1 % 2 == 0 || n2 % 2 == 0){
        printf("apenas um numero eh par");

    }
    else{
        printf("nenhum numero eh par");
    }
    return 0;
}
