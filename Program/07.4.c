#include<stdio.h>
double add(double a,double b);
int main()
{
    double a=2.3,b=2.2,c;
    c=add(a,b);
    printf("%0.2lf\n",c);
    return 0;
}
double add(double a,double b)
{
    double sum=a+b;
    return sum;
}
