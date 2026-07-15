#include<stdio.h>
int main()
{
    int i,marks[5];
    float sum=0,avg;
    printf("Enter marks of students");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("%f\n",sum);
    printf("%f",avg);
}