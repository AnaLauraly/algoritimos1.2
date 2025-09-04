#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, cont = 1;
   printf("informe um numero:\n");
   scanf("%d", &num);
   if(num > 0 ){
    while(cont <= num){
        printf("%d\t", cont);
        cont++;
    }
   }else{
   printf("o numero deve ser positivo\n");
   }
    return 0;
}
