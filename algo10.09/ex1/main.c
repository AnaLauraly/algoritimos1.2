#include <stdio.h>
#include <stdlib.h>

int main()
{
  int idade, cont, somaidade = 0, qntM = 0, qntH = 0;
  char sexo;
  double peso, somapeso = 0;
  for(cont = 1; cont <= 4; cont++){
    printf("informe a idade, peso e o sexo:");
    scanf("%d %lf %c", &idade, &peso, &sexo);
    if(sexo == 'f' || sexo == 'F'){
        qntM++;
        somapeso = peso + somapeso;


  }else if(sexo == 'm' || sexo == 'M'){
  qntH++;
  somaidade = idade + somaidade;
  }


  }

  printf("o total de mulheres eh: %d\n", qntM);
  printf("media dos pesos das mulheres: %.2lf\n", somapeso/qntM);


  printf("o total de homens eh: %d", qntH);
  printf("a media das idades dos homens eh: %d", somaidade/qntH);
    return 0;
}
