#include<stdio.h>
int main()
{
    int a=0,b=6;
    printf("%d\n",a&b&&b+1||0);
    printf("%d\n",a&b&&b+1||0||b++);
    printf("%d\n",b);
}