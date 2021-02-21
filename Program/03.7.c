#include<stdio.h>
int main()
{
    int x=5,remainder;
    remainder=x%2;
    if(remainder==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}
