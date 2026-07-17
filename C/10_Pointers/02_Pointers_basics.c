#include<stdio.h>
int main()
{
    int a=10,b=9,c;
    int*p,*q;
    p=&a;
    q=&b;
    c=*q;
*p=20;
printf("c=%d\n",c);
printf("a=%d",a);
}