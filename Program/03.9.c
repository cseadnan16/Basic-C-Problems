#include<stdio.h>
int main()
{
    char x;

    printf("Please enter the letter:");
    scanf("%c",&x);

    if(x>='a'&& x<='z')
    {
        printf("The letter is lower case\n");
    }
    else if(x>='A'&& x<='Z')
    {
        printf("The letter is uper case\n");
    }
    return 0;
}
