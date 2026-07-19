#include<stdio.h>
int main()
{
    int a[]={3,2,67,0,56};
    int*p;
    p=&a[3];
  printf("%d\t%d\t%d",--(*p),(*p)++,++(*p));
}