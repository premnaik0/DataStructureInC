#include <stdio.h>
void main()
{
    int n1[3][3],n2[3][3],n3[3][3],i,j,k;

    printf("Enter number for Matrix1\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&n1[i][j]);
        }
    }
    printf("Enter number for Matrix2\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&n2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            n3[i][j]=0;
            for(k=0;k<3;k++)
            {
                n3[i][j]+=n1[i][k]*n2[k][j];
            }
        }
    }
    printf("Mult of Matrix1 & Matrix2 is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",n3[i][j]);
        }
        printf("\n");
    }
}
