#include<stdio.h>
void tranpose(int[3][3]);
void main()
{
        int a[3][3],b[3][3],i,j;
    printf("Enter number for Matrix1\n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix before transpose:\n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    tranpose(a);
}
void tranpose(int a[3][3])
{
    int b[3][3],i,j;
    printf("Matrix after transpose:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           b[i][j]=a[j][i];
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
