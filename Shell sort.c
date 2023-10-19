#include<stdio.h>
#include<conio.h>
#define SIZE 10
void shell_sort(int [],int);

void main()
{
int a[SIZE],i,n;
printf("Enter how many elements");
scanf("%d",&n);

/* Input Array */

for(i=0;i<n;i++)
{
printf("Enter element %d ", i+1);
scanf("%d",&a[i]);
}

shell_sort(a,n);

/* Outpput Array */

for(i=0;i<n;i++)
printf("%d\
       n",a[i]);

getch();
}

void shell_sort(int a[],int n)
{
int i,j,item,span;
span = n/2;
while(span >= 1)
{
for(i=span;i<n;i++)
{
item = a[i];

/*shifting */

for(j=i-span;j>=0 && a[j] > item; j-=span)
a[j+span] = a[j];

/*insert*/
a[j+span] = item;
}

span = span / 2;
}
}
