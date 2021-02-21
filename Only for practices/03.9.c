#include<stdio.h>
int main()
{
    double aliquot,divisor,dividen;
    int x;
    printf("Enter divisor:");
    scanf("%lf",&divisor);
    printf("Enter dividen:");
    scanf("%lf",&dividen);

    x = divisor/dividen;
    aliquot = divisor-(dividen*x);

    printf("Aliquot is:%0.2lf\n",aliquot);

    if(aliquot==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}
