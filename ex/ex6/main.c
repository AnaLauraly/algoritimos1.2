#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, soma;

 for(i = 100; i <= 200; i++){
        if(i % 7 == 0){
            soma += i;
        }
 }


 printf("soma: %d", soma);
  return 0;
}
