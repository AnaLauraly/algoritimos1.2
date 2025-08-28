#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    char soma;
    printf("informe o primeiro numero:");
    scanf("%d", &n1);
    printf("informe o segundo numero:");
    scanf("%d", &n2);
    printf("informe o tipo da conta:");
    scanf(" %c", &soma);
    switch(soma){
    case '+':{ ;
    printf("o resultado da soma eh: %d", n1 + n2);
    break;}
    case '-':{ ;
    printf("o resultado da soma eh: %d", n1 - n2);
    break;}
    case '*':{ ;
    printf("o resultado da soma eh: %d", n1 * n2);
    break;}
    case '/':{ ;
    printf("o resultado da soma eh: %d", n1 / n2);
    break;}

default:{
printf("opcao invalida:");
       }
    }
    return 0;
}
