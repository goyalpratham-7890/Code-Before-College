#include<stdio.h>
int main()
{
    int value;
    char s1[]="Hello";
    char s2[]="Welcome";
    value=strcmp(s1,s2);
    if (value==0)
    printf("Both strings are same");
    else
    printf("Not same\n");
    printf("%d",value);
}