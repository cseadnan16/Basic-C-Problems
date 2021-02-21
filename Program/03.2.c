#include<stdio.h>
int main()
{
    int n;

    printf("Please enter the number n:");
    scanf("%d",&n);

    if(n<0)
    {
        printf("The number is negative\n");
    }
    else if(n>0)
    {
        printf("The number is positive\n");
    }
    else if(n==0)
    {
        printf("The number is zero!");

    }
   return 0;
}
