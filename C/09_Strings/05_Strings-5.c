#include<stdio.h>
int main()
    {
        char name[30];
        printf("Enter name:");
        scanf("%5s",name);
        printf("%.5s\n",name);
        printf("%10.5s\n",name);
        puts(name);
        puts(name);
    }
//See now scanf reads only 5 characters now whether we use printf or puts     