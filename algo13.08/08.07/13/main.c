#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    printf("informe um numero:");
    scanf("%lf", &num);
    printf("floor: %lf\n", floor(num));
    printf("ceil: %lf\n", ceil(num));
    printf("round: %lf\n", round(num));
    return 0;
}
