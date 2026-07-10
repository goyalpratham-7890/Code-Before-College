#include<stdio.h>
int main()
{
    int a;
    a=(5,4);
//Here()has more priority so it assigns 4 to a and ignores 5 
    printf("%d",a);
}