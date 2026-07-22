#include<stdio.h>
int main()
{
    int a=5;
    void*vp;
    vp=&a;
    printf("%d",*(int*)vp);
}