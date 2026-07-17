#include<stdio.h>
int main()
{
    int i,flag,value;
    char s1[]="Hello";
    char s2[]="Hi";
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Not same");
    }
    else
    printf("same");
}