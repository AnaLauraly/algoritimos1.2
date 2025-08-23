#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    double altura, conta, peso;
    printf("informe o sexo: %c", sexo);
    scanf("%c", &sexo);
    printf("informe a altura:");
    scanf("%lf", &altura);
    printf("informe o peso:");
    scanf("%lf", &peso);
    if(sexo == 'f' || sexo == 'F'){
        conta = 62.1 * altura - 44.7;
        printf("seu peso ideal feminino eh: %lf", conta);
    }
    else if(sexo == 'm' || sexo == 'M'){
        conta = 72.7 * altura - 58;
        printf("seu peso ideal masculino eh: %lf", conta);
    }

    return 0;
}
