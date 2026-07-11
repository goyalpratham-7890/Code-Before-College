#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Enter values of a,b,c:");
    scanf("%c%c%c",&a,&b,&c);

    if(a>='A'&& a<='Z')
    {
        printf("%c is uppercase\n",a);
    }
    else if(a>='a' && a<='z')
    {
        printf("%c is lowercase\n",a);
    }
    else if(a>='0' && a<='9')
    {
        printf("%c is number\n",a);
    }
    else
    {
        printf("%c is something else\n",a);
    }
    if(b>='A'&& b<='Z')
    {
        printf("%c is uppercase\n",b);
    }
    else if(b>='a' && b<='z')
    {
        printf("%c is lowercase\n",b);
    }
    else if(b>='0' && b<='9')
    {
        printf("%c is number\n",b);
    }
    else
    {
        printf("%c is something else\n",b);
    }
    if(c>='A'&& c<='Z')
    {
        printf("%c is uppercase\n",c);
    }
    else if(c>='a' && c<='z')
    {
        printf("%c is lowercase\n",c);
    }
    else if(c>='0' && c<='9')
    {
        printf("%c is number\n",c);
    }
    else
    {
        printf("%c is something else\n",c);
    }

printf("END OF PROGRAM");    
}