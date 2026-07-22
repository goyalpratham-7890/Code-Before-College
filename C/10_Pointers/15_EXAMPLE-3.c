#include<stdio.h>
int main()
{
    int a=-11;
    int*p=&a;
    *p=10;
    printf("%d",a);
}
//See if we use const int here then it will give error  