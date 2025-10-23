#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float notas[5];
   float soma, media;
   for(int i = 1; i <= 5; i++){
     printf("informe a nota:");
     scanf("%f", &notas[i]);
     soma = soma + notas[i];

   }
   media = soma / 5;
       return 0;
}
