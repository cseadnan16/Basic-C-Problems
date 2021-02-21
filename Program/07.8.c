#include<stdio.h>

double area_of_circle(double r)
{
  double area;
  area=3.14*r*r;
  return area;
}
int main()
{
 double x,A;
 printf("Enter the value:");
 scanf("%lf",&x);
 A=area_of_circle(x);
 printf("The area of circle is:%0.2lf\n",A);
 return 0;
}
