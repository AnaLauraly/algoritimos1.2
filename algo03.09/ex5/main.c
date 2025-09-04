#include <stdio.h>
#include <stdlib.h>

int main()
{
int cont = 0, soma = 0, num;
printf("informe um numero:");
scanf("%d", &num);
while(cont<= num){
    soma = soma + cont;
    cont++;
}
printf("soma: %d", soma);
    return 0;
}
