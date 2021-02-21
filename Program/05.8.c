#include<stdio.h>
int main()
{
    int a,b,t,gcd,lcm,max,min;

    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    if(a==0 || b==0)
    {
        if(a==0)
        {
           gcd=b;
        }
        else
        {
            gcd=a;
        }
    }

    else
    {
        if(a>b)
        {
            max=a;
            min=b;
        }
        else
        {
            max=b;
            min=a;
        }
        while(min !=0)
        {
            t=min;
            min=max%min;
            max=t;
        }
        gcd=max;
    }

    lcm=(a*b)/gcd;

    printf("\nGCD is: %d\n",gcd);
    printf("LCM is: %d\n",lcm);
    return 0;
}
