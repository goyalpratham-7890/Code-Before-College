#include<stdio.h>
int main()
{
    int d;
    int b[]={1,2,3};
    int a[]={0,1,-1,10,11};
    int*p=&a[0];
    int*q=&b[0];
    d=q-p;
    printf("%d",d);
    q=q-2;
    d=p-q;
     printf("\n%d",d);
      printf("\n%d",q);
}
//See by subtacting two diff arrays we are getting undefined behaviour