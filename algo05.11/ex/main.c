#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 100

void preencher_matriz(int matriz[tamanho][tamanho]){
for(int i=0;i<tamanho;i++){
    for(int j=0; j<tamanho; j++){
        matriz[i][j]= i+j;
    }

}
}

int main()
{
    int matriz[tamanho][tamanho];
    long long soma;
    clock_t inicio, fim;
    double tempo_execucao;
    printf("------------exercicio 10: comparação de acesso a cache---------\n");
    printf("tamanho da matriz: %d x %d\n", tamanho, tamanho);
    preencher_matriz(matriz);
    soma=0;
    inicio=clock();
    for(int i=0; i<tamanho;i++){
        for(int j=0; j<tamanho;j++){
            soma +=matriz[i][j];
        }
    }
    fim = clock();
    tempo_execucao-(double)(fim-inicio);
    printf("1 metodo otimizado (linha/coluna)\n");
    printf("soma total: %lld\n", soma);
    printf("tempo de execucao: %.6f segundo\n", tempo_execucao);

    soma=0;
    inicio=clock();

    for(int j=0; j<tamanho;j++){
        for(int i=0; i<tamanho;i++){
            soma +=matriz[i][j];
        }
    }
    fim = clock();
    tempo_execucao-(double)(fim-inicio);
    printf("1 metodo otimizado (coluna/linha)\n");
    printf("soma total: %lld\n", soma);
    printf("tempo de execucao: %.6f segundo\n", tempo_execucao);
    printf(" conclusao: o metodo 1 deve ser o mais rapido devido a localidade de referencia cache. \n");

    return 0;
}
