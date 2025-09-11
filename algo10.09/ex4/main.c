#include <stdio.h>
#include <stdlib.h>

int main()
{
   int opcao, num1, num2;
   printf("1 - multiplicar\n");
   printf("2 - somar\n");
   printf("3 - subtrair\n");
   printf("4 - dividir\n");
   printf("5 - sair\n");
   scanf("%d", &opcao);
   while(opcao != 5){
    printf("informe o primeiro numero:");
    scanf("%d", &num1);
    printf("informe o segundo numero:");
    scanf("%d", &num2);
    switch(opcao){
    case 1:{
    printf("resultado: %d\n", num1*num2);
           break;
           }
    case 2:{
    printf("resultado: %d\n", num1+num2);
    break;
           }
    case 3:{
    printf("o resultado eh: %d\n", num1-num2);
    break;
    }
        case 4:{
            if(num2 == 0){
                printf("denominador 0\n");
            }
            else{
                printf("o resultado eh: %d\n", num1/num2);
            }
            break;
        case 5:{
        printf("saindo...\n");
        break;
        }
     default:{
     printf("opcao invalida");
     break;
            }
        }

    }
         printf("1 - multiplicar\n");
   printf("2 - somar\n");
   printf("3 - subtrair\n");
   printf("4 - dividir\n");
   printf("5 - sair\n");
   scanf("%d", &opcao);
   }
    return 0;
}
