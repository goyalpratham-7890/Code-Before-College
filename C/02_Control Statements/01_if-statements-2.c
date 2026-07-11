#include<stdio.h>
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    if(a)
    {
    printf("Inside the block\n");
    }
    printf("Out of block");
}
