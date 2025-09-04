#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("informe um numero: ");
    scanf("%d", &num);
    if(num > 0){
        while(num >= 1){
                printf("%d\t", num);
            num--;
        }
    }
        else{
            printf("o numero eh negativo");}



    return 0;
}
