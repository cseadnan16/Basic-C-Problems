#include<stdio.h>
double add(double n1,double n2)
{
    double sum=n1+n2;
    return sum;
}
int main()
{
    double a=2.8,b=2.7,c=add(a,b);
    printf("%0.2lf\n",c);
    return 0;
}
