#include<stdio.h>
int main()
{
    double x,y,x_plus_y,x_minus_y;

    printf("Enter the value of x+y & x-y:");
    scanf("%lf%lf",&x_plus_y,&x_minus_y);

    x=(x_plus_y+x_minus_y)/2;
    y=(x_plus_y-x_minus_y)/2;

    printf("x=%0.2lf,\ny=%0.2lf",x,y);
    return 0;
}
