#include<stdio.h>
void Bubble(int a[],int);
void print(int a[],int);
void main()
{
    int i,j,temp,ar1[5],n=5;
    printf("Enter the 5 elements for array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar1[i]);
    }
    printf("Array elements before sorting: \n");
    print(ar1,n);
    Bubble(ar1,n);
    printf("\nArray elements after sorting: \n");
    print(ar1,n);
}
void print (int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void Bubble(int a[],int n)
{
    int i,j,temp;
    for(i=n;i>0;i--)
    {
        for(j=0;j<i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
