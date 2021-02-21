#include<stdio.h>
int main()
{
    int ara[]={10,20,30,40,50,60,70,80,90,100,1};
    int i,j,temp;

    /*for(i=0,j=10;i<11;i++,j--)
    {
        temp=ara[j];
        ara[j]=ara[i];
        ara[i]=temp;
    }*/

    for(i=0;i<11;i++)
    {
        printf("%d\n",ara[10-i]);  // temp-ara[i]+10
    }
    return 0;
}
