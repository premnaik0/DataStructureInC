#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("enter elements for matrix1\n");
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter elements for matrix1\n");
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("addition of matrix1 and matrix2 is =\n");

    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
           printf("\t%d\t",c[i][j]);
        }
        printf("\n");
    }
}
