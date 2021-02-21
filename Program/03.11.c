#include<stdio.h>
int main()
{
    char x ;
    printf("Please enter the x:");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("%c is vowel\n",x);
    }
    else
    {
        printf("%c is consonant\n",x);
    }
    return 0;
}
