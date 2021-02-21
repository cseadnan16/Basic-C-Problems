#include<stdio.h>

int main()
{
    int a,b,x,gcd,lcm;

    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    if(a<b)
    {
        x=a;
    }
    else
    {
        x=b;
    }
    for(;x>=1;x--)
    {
        if(a%x==0 && b%x==0)
        {
            gcd=x;
            break;
        }
    }
    lcm=(a*b)/gcd;

    printf("\nGCD is %d\n",gcd);
    printf("LCD is:%d\n",lcm);
    return 0;
}

