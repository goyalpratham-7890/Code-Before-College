#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
if(marks>80)
    {
        printf("Grade is A\n");
    }
    else if(marks>70)
    {
         printf("Grade is B\n");
    }
    else if(marks>60)
    {
        printf("Grade is C\n");
    }
else
    {
        printf("Grade is D");
    }
}
