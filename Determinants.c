#include<stdio.h>
 void main()
 {
      int a[3][3],i,j;
      double d;
      printf("Enter elements of the matrix:\n");
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
               scanf("%d",&a[i][j]);
          }
      }
      printf("\nThe matrix was\n");
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
         {
               printf("%d\t", a[i][j]);
         }
        printf("\n");
      }
      d=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);

      printf("\nDeterminant of above matrix is: %f\n", d);

    }
