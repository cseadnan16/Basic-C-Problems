#include<stdio.h>
int main()
{
    int var=1;
    printf("Using postfix (var++) var = %d\n",var++);
    printf("Value after increment is:%d\n\n\n",var);
    var=1;
    printf("Using prefix (++var) var = %d\n",++var);
    printf("Value after increment is:%d\n",var);
    return 0;
}
