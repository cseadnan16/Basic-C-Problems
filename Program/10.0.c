#include<stdio.h>

is_prime(int n);

int main()
{
    int n;
    while(1)
    {
        printf("Please enter a number(enter 0 to exit):");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        if(1==is_prime(n))
        {
            printf("%d is a prime number.\n",n);
        }
        else
        {
            printf("%d is a not prime number.\n",n);
        }
    }
    return 0;
}

int is_prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
