#include<stdio.h>
void binaryserch(int[],int);
void main()
{
    int a[20],n;
    printf("Enter the size of array:\t");
    scanf("%d",&n);
    printf("Enter numbers for array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    binaryserch(a,n);
}
void binaryserch(int a[],int n)
{
    int no,low,high,mid,flag=1;
    printf("enter the element to be search");
    scanf("%d",&no);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==no)
        {
            flag=0;
            break;
        }
        else
        {
            if(a[mid]<no)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    if(flag==1)
    {
        printf("The number not found");
    }
    else
    {
        printf("The number found");
    }
}
