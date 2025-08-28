#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   double a, b, c, delta, x1, x2;
   printf("informe o valor de a:");
   scanf("%lf", &a);
   printf("informe o valor de b:");
   scanf("%lf", &b);
   printf("informe o valor de c:");
   scanf("%lf", &c);
   delta = b * b - 4*a*c;
   if(delta < 0){
    printf("nao existem raizes reais");
   }
   else if(delta == 0){
    x1 = -b/(2*a);
    printf("ah apenas uma raiz real: %.2lf", x1);
   }
   else{
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("raizes reais: %.2lf, %.2lf", x1, x2);

   }

    return 0;
}
