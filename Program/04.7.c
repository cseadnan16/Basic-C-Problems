#include<stdio.h>
int main()
{
    int i=1,n=5;
    for(;;)
    {
        printf("%dx%d=%d\n",n,i,n*i);
        i++;
        if(i>10000)
        {
            break;
        }
    }
    return 0;
}
