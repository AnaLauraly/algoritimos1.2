#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, n1, n2, n3;
    float media, me;
    printf("informe o codigo do aluno:\n");
    scanf("%d", &cod);

    printf("informe a nota:");
    scanf("%d", &n1);
    printf("informe a nota:");
    scanf("%d", &n2);
    printf("informe a nota:");
    scanf("%d", &n3);
    printf("informe a media dos exercicios:");
    scanf("%f", &me);

    printf("RA: %d\n", cod);
    printf("notas: %.2d, %.2d, %.2d\n", n1, n2, n3);
    printf("media dos exercicios: %.2f\n", me);
    printf("media final: %.2f\n", media);

    media = (n1 + n2*2 + n3*3 + me) / 7;
if(media >= 60){
    printf("aluno aprovado!\n");
    if(media >= 90){
        printf("conceito A.\n");
    }
    else if(media >= 75 && media < 90){
        printf("conceito B.\n");
    }
    else{
        printf("conceito C.\n");
    }
}
else{
    if(media >= 40 && media <60){
        printf("conceito D.\n");
    }
    else{
        printf("conceito E.\n");
    }
}
    return 0;
}
