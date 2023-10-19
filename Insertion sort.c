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
printf("Array element before sorting:\n ");
print(a,n);
sort(a,n);
printf("\nArray element after sorting:\n");
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
   int i,j,temp;
   for(i=1;i<n;i++)
   {
       temp=a[i];
       j=i-1;
       while(j>=0&&temp<=a[j])
        {
             a[j+1]=a[j];
             j=j-1;
        }
         a[j+1]=temp;
    }
}
