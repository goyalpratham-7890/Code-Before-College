#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>25&&age<30)
    {
        printf("Your age is:%d",age);
        printf("\nYou are winner");
    }
    else
    {
        printf("\nYour age is:%d",age);
        printf("\nYou lose");
    }
    printf("\nOut of loop");
}
