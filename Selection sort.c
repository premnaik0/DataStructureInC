#include<stdio.h>
void print(int a[],int);
void sort(int a[],int);
void main()
{
int i,j,temp,a[5],n=5;
printf("Enter 5 element of the array:\n");
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
printf("Array elements before sorting: \n");
print(a,n);
sort(a,n);
printf("\nArray elements after sorting: \n");
print(a,n);
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }
}
void sort( int a[],int n)
{
   int i,j,temp,min;
   for(i=0;i<n-1;i++)
   {
       min=i;
       for(j=i+1;j<n;j++)
       {
           if(a[min]>a[j])
           {
           min=j;
           }
        }
        if(min!=i)
        {
            temp=a[i];
             a[i]=a[min];
            a[min]=temp;
           }
       }
}
