#include<stdio.h>
int main()
{
    int a=10,b=6;
    printf("%d\n",a&b&&b+1||0);
    printf("%d\n",a&b&&b+1||0||b++);
    printf("%d\n",b);
}
