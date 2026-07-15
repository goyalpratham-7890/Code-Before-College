#include<stdio.h>
int main()
{
    int a[3][3],i,j,SumRow,SumCol;
    printf("Enter elements of arrays:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        SumRow=0,SumCol=0;
        for(j=0;j<3;j++)
        {
        SumRow=SumRow+a[i][j];
        SumCol=SumCol+a[j][i];
        }
    printf("SumRow=%d,SumCol=%d\n",SumRow,SumCol);
    }
}