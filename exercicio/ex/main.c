#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
printf("informe um numero:");
scanf("%d", &num);
if(num > 0){
printf("o numero eh positivo");
}
if(num <= 0){
    printf("o numero é nao positivo");
}
    return 0;
}
