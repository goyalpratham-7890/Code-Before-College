#include<stdio.h>
int main()
{
    char str[]="Welcome To my YouTube channel";
    char*ptr=str;
    printf("%c\n",*str);
    printf("%c\n",*(ptr++ +1));
    printf("%c\n",*((ptr-- +5)-1)+3);
    printf("%c\n",*(++ptr+10)-32);
    printf("%c\t%c\t%c\n",*ptr,*++ptr,*--ptr);
}