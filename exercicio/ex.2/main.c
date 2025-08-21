#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("infome um numero inteiro:");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("o numero eh par");
    }
   if(n % 2 != 0){
    printf("o numero eh impar");
   }
    return 0;
}
