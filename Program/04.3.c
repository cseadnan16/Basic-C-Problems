#include<stdio.h>
int main()
{
    int n=1;
    while(n<=100)
    {
        //printf("%d\n",n=n+1);
        if(n>=10)
        {
         break;
        }
        printf("%d\n",n+=1);
    }
    return 0;
}
