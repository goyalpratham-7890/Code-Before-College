#include<stdio.h>
int main()
{
    int i,a[5];
    printf("Enter elements of arrays:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("The elements of array are:%d\n",a[i]);
    }
}