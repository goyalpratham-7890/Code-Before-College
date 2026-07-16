#include<stdio.h>
int main()
    {
        char name[30];
        printf("Enter name:");
        gets(name);
        printf("%s",name);
    }
//See buffer overflow is occuring with gets()fn.    