#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, maior, menor, indice = 1;

do{
    printf("informe um numero:");
    scanf("%d", &num);
    if(indice == 1){
        maior = num;
        menor = num;
        indice++;
    }
    else if(num != 0){
    if(num > maior){
        maior = num;
    }else if(num < menor){
    menor = num;}

    }

}while(num != 0);
printf("o maior numero eh: %d e o menor eh %d", maior, menor);

    return 0;
}
