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
    printf("o valor das diagonais eh: [%d][%d][%d]", matriz[0][0], matriz[1][1], matriz[2][2]);
    return 0;
}
