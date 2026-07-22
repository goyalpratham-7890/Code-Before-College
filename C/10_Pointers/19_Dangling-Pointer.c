#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("%d",*ptr);
    free(ptr);
}
//After freeing ptr it is still pointing to empty space therefore it is known as Dangling pointer