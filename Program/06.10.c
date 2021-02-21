
#include<stdio.h>
int main()
{
    int ft_marks[40],st_marks[40],final_marks[40];
    int i,j,k,roll,marks,count;
    double total_marks[40];

    printf("Please enter the number of 1st terminal marks:");
    printf("\n");

    for(roll=1;roll<=40;roll++)
    {
        printf("ROLL %d: ",roll);
        scanf("%d",ft_marks[i]);
    }

    printf("Please enter the number of 2nd terminal marks:");
    printf("\n");

     for(roll=1;roll<=40;roll++)
    {
        printf("ROLL %d: ",roll);
        scanf("%d",st_marks[j]);
    }

    printf("Please enter the number of Final marks:");
    printf("\n");

     for(roll=1;roll<=40;roll++)
    {
        printf("ROLL %d: ",roll);
        scanf("%d",final_marks[k]);

    }

    for(i=0;i<40;i++)
    {
        total_marks[i]=ft_marks[i]/4.0+st_marks[j]/4.0+final_marks[k]/2.0;
        printf("Roll NO:%d\tTotal Marks:%0.0lf\n",i+1,total_marks[i]);
    }

    return 0;
}
