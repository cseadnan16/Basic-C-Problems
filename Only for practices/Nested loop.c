#include<stdio.h>

int main()
{
    int i,n;
    for(n=1;n<=20;n++)
    {
        i=1;
        while(i<=10)
        {
            printf("%dx%d=%d\n",n,i,n*i);
            i++;
        }
    }
    return 0;
}

