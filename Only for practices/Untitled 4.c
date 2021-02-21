#include<stdio.h>
int main()
{
    double a,b,Sum,Minus,Multiple,Divided;
    char S,m,M,D;

    printf("Enter the number of a & b:");
    scanf("%lf%lf",&a,&b);

    Sum=a+b;
    S='+';
    printf("Sum=%lf\n",Sum);

    Minus=a-b;
    m='-';
    printf("Minus=%lf\n",Minus);

    Multiple=a*b;
    M='*';
    printf("Multiple=%lf\n",Multiple);

    Divided=a/b;
    D='/';
    printf("Divided=%lf\n",Divided);

    return 0;
}
