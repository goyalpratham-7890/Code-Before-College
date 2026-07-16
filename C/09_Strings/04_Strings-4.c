#include<stdio.h>
int main()
    {
        char name[30];
        gets(name);
        printf("%.5s\n",name);
        printf("%10.5s\n",name);
        puts(name);
        puts(name);
    }
 //See here half string is reading by .5 and 10.5 leaving space in front first  