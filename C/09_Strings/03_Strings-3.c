#include<stdio.h>
int main()
    {
        char name[30];
        gets(name);
        printf("%s\n",name);
        puts(name);
        puts(name);
    }
    //See puts automatically adding new line character by default