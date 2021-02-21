#include<stdio.h>
int main()
{
    int i,m,n;
   for(n=1;n<=20;n++)
    {
        printf("\n");
        m=0;
        for(i=1,m=0;i<=10;i++)
        {
            m=m+n;
            printf("%dx%d=%d\n",n,i,m);

        }

    }
    printf("\t");
    return 0;
}
