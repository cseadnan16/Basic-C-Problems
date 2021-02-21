#include<stdio.h>

int main()
{
    int row[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
    int col[5][5]={{6,3,8,2,4},{4,7,6,4,1},{7,1,4,2,6},{8,9,2,5,7},{9,9,7,9,3}};
    int i,j,m,n,sum,SUM;
    sum=0;
    SUM=0;

    for(i=0,j=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum=sum+row[i][j];
        }
        printf("Sum of row %d:%d\n",i+1,sum);
    }

    printf("\n");

    for(m=0;m<5;m++)
    {
        for(n=0;n<5;n++)
        {
            SUM+=col[m][n];
        }
        printf("Sum of col %d:%d\n",m+1,SUM);
    }
    return 0;
}
