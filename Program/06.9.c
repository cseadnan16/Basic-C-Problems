#include<stdio.h>
int main()
{
    int i,j;
    int total_marks[12]={6,7,4,76,9,7,6,2,4,3,4,1};
    int marks_count[12];

    for(i=0;i<12;i++)
    {
        marks_count[i]=0;
    }

    for(i=0;i<12;i++)
    {
        marks_count[total_marks[i]]++;
        printf("Marks:%d Count:%d\n",total_marks[i],marks_count[j]);
        /*for(j=0;j<=11;j++)
        {
            printf("Marks:%d Count:%d",total_marks[i],marks_count[j]);
        }*/
        //printf("\n");
    }
    printf("\n");
    /*for(j=0;j<=10;j++)
    {
        printf("Marks:%d Count:%d\n",total_marks[i],marks_count[j]);
    }*/

    return 0;
}
