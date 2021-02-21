#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char binary[65];
    int len,decimal,power,i;
    printf("Please Enter the binary number:");
    scanf("%s",binary);
    decimal=0;
    len=strlen(binary);
    printf("Length of the Binary number:%d\n",len);

    for(i=0,power=len-1;i<=len,power>=0;i++,power--)
    {
        decimal += (binary[i]-'0')*pow(2,power);
    }
    printf("Decimal value is %d\n",decimal);

    return 0;
}

