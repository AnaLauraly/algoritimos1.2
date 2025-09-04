#include <stdio.h>
#include <stdlib.h>

int main()
{
      int cont = 1, num, media, soma = 0;
   while(cont<= 10){
   printf("informe um %d° numero:", cont);
   scanf("%d", &num);
   cont++;
   soma =  soma + num;
   }
   media = soma / 10;

   printf("a media dos numeros eh: %d", media);
    return 0;
}
