#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, opcao;
    printf("digite o codigo de 1 ate 4:");
    scanf("%d", &codigo);
    switch(codigo){
    case 1:{
       printf("alimento nao perecivel");
    break;
    }
    case 2: {
        printf("alimento perecivel");
        break;
    }
    case 3:{
    printf("vestuario");
    break;
     }
     case 4:{
     printf("limpeza");
     break;
            }
     default:{
        printf("ERRO");
        break;}




        }
    return 0;
}
