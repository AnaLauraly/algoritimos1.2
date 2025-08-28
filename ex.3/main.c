#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("informe um numero de 1 ah 7:");
    scanf("%d", &num);
    switch (num){
        case 1:{
        printf("domingo\n");
        break;
        }
        case 2:{
            printf("segunda\n");
        break;
        }
        case 3:{
            printf("terca\n");
        break;
        }
        case 4:{printf("quarta\n");
        break;
        }
        case 5:{printf("quinta\n");
        break;
        }
        case 6:{printf("sexta\n");
        break;
        }
        case 7:{printf("sabado\n");
        break;
        }
        default:{printf("opcao invalida");
                        }
    }

    return 0;
}
