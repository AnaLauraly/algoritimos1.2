#include <stdio.h>
#include <stdlib.h>

int main()
{
   double valor, valorpag, opcao;
   printf("informe o preco do produto:");
   scanf("%lf", &valor);
   printf("1 - A vista, em dinheiro ou cheque\n");
   printf("2 - A vista no cartao\n");
   printf("3 - Em duas vezes sem juros\n");
   printf("4 - em duas vezes com juros\n");
   scanf("%lf", &opcao);
   if(opcao == 1){
    valorpag = valor - valor * 0.1;
    printf("valor a ser pago: %.2lf\n", valorpag);
   }
   else if(opcao == 2){
    valorpag = valor - valor * 0.15;
    printf("valor a ser pago: %.2lf\n", valorpag);
   }
   else if(opcao == 3){
    valorpag = valor / 2;
    printf("valor a ser pago: %.2lf\n", valorpag);
   }
   else if(opcao == 4){
    valorpag = (valor + valor * 0.1)/2;
    printf("valor a ser pago: %.2lf\n", valorpag);
   }
   else{
    printf("opcao invalida");
   }
    return 0;
}
