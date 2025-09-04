#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num = 1;
   printf("informe um numero:");
   scanf("%d", &num);
   do{
    printf("%d\n", num);
    num++;
   }while(num <= 10);
    return 0;
}
