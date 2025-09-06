#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont = 1;
    printf("informe um numero:");
    scanf("%d", &num);
    do{
    printf("%d x %d = %d\n", num, cont, num * cont);
    cont++;
    }while(cont <= 10);

    return 0;
}
