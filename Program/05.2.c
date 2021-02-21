#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x,y;
    printf("enter the value of a1,a2,b1,b2,c1,c2:");
    scanf("%lf%lf%lf%lf%lf%lf",&a1,&a2,&b1,&b2,&c1,&c2);
    //d=a1*b2-a2*b1;
    if(d==0)
    {
        printf("Value of x and y can not be determined.\n");
    }
    else
    {
        x=(b2*c1-b1*c2)/d;
        y=(a1*c2-a2*c1)/d;
        printf("X=%0.2lf\nY=%0.2lf");
    }
    return 0;
}
