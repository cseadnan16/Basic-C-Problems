#include<stdio.h>

void sum_of_all(void)
{
    int n,sum;
    for(n=0,sum=0;n<=100;n++)
    {
        sum=sum+n;
        printf("\n sum_of_all numbers from 1 to 100 is %d",sum);

    }
}
  void main(void)
    {
        sum_of_all();
    }

