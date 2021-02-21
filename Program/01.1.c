#include<stdio.h>
int main()
{
    int a,b,t,max,min,lcd;

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    if(a==0) printf("\nGCD = %d\n",a);
    else if(b==0)printf("\nGCD = %d\n",b);
    else{
        if(a>b){
            max = a;
            min = b;
        }
        else{
            max = b;
            min = a;
        }
        while(min != 0){
            t = min;
            min = max%min;
            max = t;
        }
        printf("\nGCD = %d\n",max);
    }

    lcd = (a*b)/max;
    printf("LCD = %d\n",lcd);

    return 0;
}


