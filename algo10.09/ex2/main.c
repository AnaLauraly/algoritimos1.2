#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, maior, menor, soma;
  double media;
  printf("informe o primeiro numero:");
  scanf("%d", &num);
  maior = num;
  soma = num;
  menor = num;
  for(int i = 1; i <= 9; i++){
    printf("informe um numero:");
    scanf("%d", &num);
    soma += num;
    if(num > maior){
        maior = num;
    }
    else if(num < menor){
        menor = num;
    }

  }
  media = soma/10.0;
  printf("Maior numero: %d\n", maior);
  printf("menor numero: %d\n", menor);
  printf("a media dos numeros eh: %lf", media);
    return 0;
}
