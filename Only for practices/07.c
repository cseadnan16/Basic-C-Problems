#include<stdio.h>
int add(int a,int b)
{
   double sum=a+b;
   return sum;
}
int main()
{
  double a,b,c;
  a=b=2.5;
  c=add(a,b);
  printf("%0.2lf\n",c);
  return 0;
}


