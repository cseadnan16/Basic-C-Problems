#include<stdio.h>
int main()
{
   char a[30]="Bangla",b[10]="desh";
    int i,j,length;
    length=6;
    for(i=length,j=0;b[j]!='\0';i++)
    {
        a[i]=b[j];
        j++;
    }
    printf("%s\n",a);
    return 0;
}
