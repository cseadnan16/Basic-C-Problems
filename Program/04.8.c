#include<stdio.h>
int main()
{
    int n=5;
    int i;
    int m=0;
    for(i=1;i<=10;i++)
    {
        m=m+n;
        printf("%dX%d=%d\n",n,i,m);
    }
    return 0;
}
