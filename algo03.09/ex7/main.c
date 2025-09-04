#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, soma = 0, qnt = 0;
   printf("informe um numero:");
   scanf("%d", &num);
   while(num != 0){
   soma += num;
   qnt++;
   printf("informe um numero:");
   scanf("%d", &num);
   }
   printf("media: %d\n", (soma/qnt));

    return 0;
}
