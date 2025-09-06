#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    printf("informe o valor de num:");
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
      //   printf("%d\n", i);
    if(i % 3 == 0){
        printf("os numeros multiplos de tres sao: %d\n", i);
    }

    }
    return 0;
}
