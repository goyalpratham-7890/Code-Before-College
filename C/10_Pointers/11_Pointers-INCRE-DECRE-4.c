#include<stdio.h>
int main()
{
    int a[]={3,2,67,0,56};
    int*p;
    p=&a[3];
    printf("%d\t%d\t%d\n",*--p,*--p,*--p);
    printf("\n%d",++(*p));
    //As we get 3 value by above printf statementnwhere p is pointing to a[0] so now it increments value of a[0](3) to 4
}