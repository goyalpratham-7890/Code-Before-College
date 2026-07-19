#include<stdio.h>
int main()
{
    int d;
    int a[]={0,1,-1,10,11};
    int*p=&a[0];
    int*q=&a[3];
    d=q-p;
    printf("%d",d);
}