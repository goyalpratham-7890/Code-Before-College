#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,count=0;
    char name[30];
    printf("Enter the name:");
    gets(name);
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("String=%d",count);
}