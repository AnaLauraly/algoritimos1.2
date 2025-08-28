#include <stdio.h>
#include <stdlib.h>

int main()
{
  char A, B, C, D, x;
  printf("informe o conceito do aluno:");
  scanf("%c", &x);
  switch(x){
  case 'A':{printf("excelente\n");
  break;}
  case 'B':{printf("bom\n");
  break;}
  case 'C':{printf("regular\n");
  break;}
  case 'D':{printf("reprovado\n");
  break;}
    default:{
        printf("opcao invalida");
    }

  }
    return 0;
}
