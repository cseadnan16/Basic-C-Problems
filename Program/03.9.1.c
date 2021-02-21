#include<stdio.h>
int main()
{
    char x='k';
    if(x>='a'&& x<='z')
    {
        printf("%c is lower case\n",x);
    }
    else if(x>='A'&& x<='Z')
    {
        printf("%c is upper case\n",x);
    }
    return 0;
}
