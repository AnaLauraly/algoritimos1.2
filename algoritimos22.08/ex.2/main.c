#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("informe a idade:");
    scanf("%d", &idade);
    if(idade < 18){
        printf("a pessoa eh menor de idade");
    }
    else if(idade > 65){
            printf("a pessoa eh maior de 65 anos");


    }
    else{
        printf("a pessoa eh maior de idade");
    }
    return 0;
}
