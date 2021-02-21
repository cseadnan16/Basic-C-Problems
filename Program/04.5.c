#include<stdio.h>
int main()
{
    int i,n;
    i=0;
    n=5;
    while(i<=10)
    {
        printf("%dX%d=%d\n",n,i,n*i);
        i++;
    }
    return 0;
}
