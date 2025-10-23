#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[8];
    int i;
    for(i = 0; i <= 8; i++){
        printf("preencha a posicao [%d]:", i);
        scanf("%d", &vetor[i]);
    }
    for(i=8; i >= 0; i--){
        printf("os valores sao: %d\n", vetor[i]);
    }


    return 0;
}

