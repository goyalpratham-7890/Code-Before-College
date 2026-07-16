#include<stdio.h>
#include<string.h>
int main()
{
    int i,len1,len2;
    char s1[30]="Pratham";
    char s2[30]="Goyal";
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0;i<=len2;i++)
    {
        s1[len1+i]=s2[i];
    }
    printf("%s",s1);
}