#include<stdio.h>
#define SIZE 20
void Bubble(int a[],int);
void Selection(int a[],int);
void Insertion(int a[],int);
void Shell(int a[],int);
void print(int a[],int);
void main()
{
    int o,n,a[5];

    printf("***************\n");
    printf("Please choose from the following:\n");
    printf("Press 1 for Bubble sort\n");
    printf("Press 2 for Selection sort\n");
    printf("Press 3 for Insertion sort\n");
    printf("Press 4 for Shell sort\n");
    printf("***************\n");

    scanf("%d",&o);

    switch(o)
    {
        case 1:
        {
            //Bubble sort
            int i,j,temp,ar1[SIZE],n;

            printf("Enter how many elements:\t");
            scanf("%d",&n);

            printf("Enter the %d elements for array\n",n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&ar1[i]);
            }
            printf("Array elements before sorting: \n");
            print(ar1,n);
            Bubble(ar1,n);
            printf("\nArray elements after sorting: \n");
            print(ar1,n);
            break;
        }
        case 2:
        {
            //Selection sort
            int i,j,temp,ar1[SIZE],n;

            printf("Enter how many elements:\t");
            scanf("%d",&n);

            printf("Enter the %d elements for array\n",n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&ar1[i]);
            }
            printf("Array elements before sorting: \n");
            print(ar1,n);
            Selection(ar1,n);
            printf("\nArray elements after sorting: \n");
            print(ar1,n);
            break;
        }
        case 3:
        {
            //Insertion sort
            int i,j,temp,ar1[SIZE],n;

            printf("Enter how many elements:\t");
            scanf("%d",&n);

            printf("Enter the %d elements for array\n",n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&ar1[i]);
            }
            printf("Array elements before sorting: \n");
            print(ar1,n);
            Insertion(ar1,n);
            printf("\nArray elements after sorting: \n");
            print(ar1,n);
            break;
        }
        case 4:
        {
            //Shell sort
            int i,j,temp,ar1[SIZE],n;

            printf("Enter how many elements:\t");
            scanf("%d",&n);

            printf("Enter the %d elements for array\n",n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&ar1[i]);
            }
            printf("Array elements before sorting: \n");
            print(ar1,n);
            Shell(ar1,n);
            printf("\nArray elements after sorting: \n");
            print(ar1,n);
            break;
        }
        default:
        {
            printf("Enter a valid option");
            main();
        }
    }
}
void print(int a[],int n)
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
void Selection(int a[],int n)
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
void Insertion( int a[],int n)
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
void Shell(int a[],int n)
{
    int i,j,temp,span;
    span = n/2;
    while(span >= 1)
    {
        for(i=span;i<n;i++)
    {
    temp = a[i];

    for(j=i-span;j>=0 && a[j] > temp; j-=span)
    a[j+span] = a[j];

    a[j+span] = temp;
    }

    span = span / 2;
    }
    }
