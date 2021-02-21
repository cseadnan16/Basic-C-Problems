#include<stdio.h>
int main()
{
    int namta[10][10];
    int row,col,sum,m,n;
    n=0,m=0,sum=0;


    for(row=0;row<10;row++)
    {
        for(col=0;col<10;col++)
        {
            namta[row][col]=(row+1)*(col+1);
            sum+=namta[row][col];

            if(namta[row][col]%2==0)
            {
                m=m+1;
            }

            else if(namta[row][col]%2!=0)
            {
                n=n+1;
            }

            printf("%d\n",namta[row][col]);
        }
        printf("\n");
    }

    printf("The all numbers Sum is:%d\n",sum);
    printf("The Even numbers are:%d\n",m);
    printf("The Odd numbers are:%d\n",n);
    return 0;
}
