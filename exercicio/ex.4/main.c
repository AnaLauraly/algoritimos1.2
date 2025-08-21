#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2;
   printf("informe o primeiro numero:");
   scanf("%d", &num1);
   printf("informe o segundo numero:");
   scanf("%d", &num2);
   if(num1 == num2){
    printf("os numeros sao iguais");
   }
   else{
    printf("os numeros sao diferentes");
   }
    return 0;
}
