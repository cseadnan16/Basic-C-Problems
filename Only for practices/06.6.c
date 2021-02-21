#include<stdio.h>
int main()
{
    int ft_marks[5]={80,65,75,90,100},
    st_marks[5]={79,82,70,91,100},
    final_marks[5]={80,90,95,85,90};
    int i,roll;
    double Total_marks[5],highest_number,lowest_number;

    for(i=0;i<5;i++)
    {
        Total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
    }

    for(roll=1;roll<=5;roll++)
    {
        printf("R0ll N0:%d\tTotal marks:%0.00lf\n",roll,Total_marks[roll-1]);
    }

    highest_number = 0;
    lowest_number= 0;
    for(i=0;i<5;i++)
    {
        if(Total_marks[i]>highest_number)
        {
            highest_number = Total_marks[i];
            //printf("The highest Number: Roll:%d\n marks is: %0.2lf\n",roll-1,highest_number);
    //printf("The lowest number:Roll:%d\n marks is: %0.2lf\n",roll,lowest_number);
        }
        else if(Total_marks[i]<lowest_number)
        {
            lowest_number = Total_marks[i];
            //printf("The highest Number: Roll:%d\n marks is: %0.2lf\n",roll-1,highest_number);
            //printf("The lowest number:Roll:%d\n marks is: %0.2lf\n",roll-1,lowest_number);
        }
    }
    printf("The highest Number: Roll:%d\n marks is: %0.2lf\n",roll-1,highest_number);
    printf("The lowest number:Roll:%d\n marks is: %0.2lf\n",roll-1,lowest_number);
    return 0;
}
