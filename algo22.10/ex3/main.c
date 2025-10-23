#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz [3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("insira um indice: [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);


        }


    }
    return 0;
}
