#include<stdio.h>
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("JK\n");
        break;
        case 2:printf("Jenny\n");
        break;
        default:
        printf("By\n");
    }
    printf("EXIT");
}