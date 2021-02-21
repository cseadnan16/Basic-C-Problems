#include<stdio.h>
char ara[40];
int main()
{

    char i;
    for(i=2;i<=40;i++)
    {
        ara[i] = '1';
        printf("%c",ara[i]);
    }
    return 0;
}
