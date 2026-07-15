#include<stdio.h>
int main()
{
    int i,a[10],even=0,odd=0;
    printf("Enter values of a:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }    
        printf("Even elements are:%d\n",even);
        printf("Odd elements are:%d",odd);
}