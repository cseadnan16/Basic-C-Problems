#include<stdio.h>
int find_max(int ara[],int n);
int find_min(int ara[],int n);
int main()
{
    int ara[]={-100,0,53,22,83,23,89,-132,201,3,85};
    int n=11;
    int max = find_max(ara,n);
    printf("The maximum number is %d\n",max);
    int min = find_min(ara,n);
    printf("The minimum number is %d\n",min);
    return 0;
}
int find_max(int ara[],int n)
{
    int i,max;
    max=ara[0];
    for(i=1;i<n;i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
    }
    return max;
}
int find_min(int ara[],int n)
{
    int i,min;
    min=ara[0];
    for(i=1;i<n;i++)
    {
      if(ara[i]<min)
      {
          min = ara[i];
      }
    }
return min;
}
