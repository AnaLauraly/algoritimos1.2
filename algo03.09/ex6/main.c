#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cont = 1, n, num, somap = 0, somai = 0, qnti = 0;
   printf("informe a quantidade de numeros:");
   scanf("%d", &n);
   while(cont <= n){
   printf("informe o %d°", cont);
   scanf("%d", &num);
   if(num % 2 == 0){
    somap= somap + num;
   }
   else{
    somai = somai + num;
    qnti++;
   }
   cont++;
   }
   printf("a soma dos pares eh %d\n", somap);
   printf("media dos impares: %d\n", (somai/qnti));


    return 0;
}
