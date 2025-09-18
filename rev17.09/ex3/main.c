#include <stdio.h>
#include <stdlib.h>

int main()
{
  char t, b, r, f, opcao;
  int contt = 0, contb = 0, contr = 0, soma;
  do{
    printf("informe o tipo de vinho:\n");
    scanf(" %c", &opcao);

    switch(opcao){

    case 't':{
            contt++;

            break;}
    case 'b':{
            contb++;

            break;}
    case 'r':{
            contr++;

            break;}
    case 'f':{
        printf("fim!!\n");
        break;}

    default:{
    printf("nao existe essa opcao\n");
    break;
    }
    }
  }while(opcao != 'f');

  soma = contt + contb + contr;
  printf("o total de vinhos eh: %d\n", soma);
  printf("o total de vinhos tintos eh: %d\n", contt);
  printf("o total de vinhos brancos eh: %d\n", contb);
  printf("o total de vinhos rose eh: %d\n", contr);

    return 0;
}
