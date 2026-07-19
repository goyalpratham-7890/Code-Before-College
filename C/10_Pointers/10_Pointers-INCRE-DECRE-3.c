#include<stdio.h>
int main()
{
    int a[]={3,2,67,0,56};
    int*p;
    p=a;
    printf("%d\n",*(++p));
//Assosivity is from right to left so it first increments its value   
    printf("%d\t%d",*p++,*p++);
    printf("\n%d",*p);
}
//See how assosivity is incrementing value of address stored in p