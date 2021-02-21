#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char binary[65];
    int len,decimal,power,i,n;

    printf("Please Enter the decimal number:");
    scanf("%d",decimal);

    /*pow(2,n)<=decimal;
    len=strlen(binary);
    printf("Length of the Binary number:%d\n",len);*/

    for(i=0;i<=decimal;i++)
    {

        if(pow(2,i)<=decimal)
        {
           i=i+1;
        }
        else if(pow(2,i)>decimal)
        {
            break;
        }
    }
    printf("%d",i);

    printf("Binary value is %s\n",binary);
    return 0;
}
