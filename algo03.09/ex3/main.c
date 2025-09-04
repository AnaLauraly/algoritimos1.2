#include <stdio.h>
#include <stdlib.h>

int main()
{
   int soma = 0, cont = 1, num;
   while(cont<= 5){
   printf("informe um %d° numero:", cont);
   scanf("%d", &num);
   soma =  soma + num;
   cont++;
   }
   printf("a soma dos numeros eh: %d", soma);
    return 0;
}
