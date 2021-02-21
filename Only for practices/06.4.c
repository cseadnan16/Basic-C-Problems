#include<stdio.h>

int main()
{
    int ara[]={1,2,3,4,5,6,7,8,9,10};
    int ara2[10]={10,9,8,7,6,5,4,3,2,1};
    int i,j;

    for(i=0,j=9;i<10;i++,j--)
    {
        ara2[j]=ara[i];
        ara[i]=ara2[i];
        printf("%d th element is:%d\n",i+1,ara[i]);
    }
    return 0;
}
