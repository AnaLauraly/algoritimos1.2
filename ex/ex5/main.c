#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, num;
printf("informe um numero:");
scanf("%d", &num);
 for(i = num; i >= 0; i = i - 1){
       printf("%d\n", i);
 }
return 0;
}
