#include<stdio.h>
int main()
{
    int a=8,b;
    b=a++,++a;
    printf("%d",b);
}
/*Note that we remove ()in b so priority also changed*/