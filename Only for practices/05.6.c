#include<stdio.h>
int main()
{
    int i,n,sum;

    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
       else
       {
           sum=sum+i;
           //printf("Sequentially sum of odd number %d:%d\n",i,sum);

       }
    }
    printf("Sequentially sum of odd number %d:%d\n",i,sum);


    return 0;
}
