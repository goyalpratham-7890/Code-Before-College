#include<stdio.h>
int main()
{
    int a,b,sum,sub,mult,divi;
    char operator;
    printf("Enter operator");
    scanf("%c",&operator);
    printf("Enter two operands:");
    scanf("%d%d",&a,&b);
    switch(operator)
    {
        case'+':sum=a+b;
        printf("Sum=%d\n",sum);
        case'-':sub=a-b;
        printf("sub=%d\n",sub);
        case'*':mult=a*b;
        printf("mult=%d\n",mult);
        case'/':divi=a/b;
        printf("divi=%d\n",divi);
        break;
        default:
        printf("Enter valid operator");
    }
}