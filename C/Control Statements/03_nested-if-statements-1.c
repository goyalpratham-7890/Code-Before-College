#include<stdio.h>
int main()
{
    int age,salary;
    printf("Enter age and salary:");
    scanf("%d%d",&age,&salary);
    printf("Your age and salary is:%d\t%d",age,salary);
    if(age>50)
    {
        if(salary<60000)
        {
            salary=salary+10000;
        }
        else
        {
            salary=salary+5000;
        }
    }
    else
    {
        salary=salary+3000;
    }
printf("\nYour updated salary is:%d",salary);
printf("\nEnd of program");    
}

