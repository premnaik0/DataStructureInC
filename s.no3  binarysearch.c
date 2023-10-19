#include <stdio.h>
void main()
{
    void binarysearch(int[],int);
    int ar[5],n=5,i;
    printf("Enter 5 element in the arry\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    binarysearch(ar,n);
}
void binarysearch(int ar[],int n)
{
    int low=0,high=n-1,mid,flag=1;
    int number;
    printf("Enter number to search:\t");
    scanf("%d",&number);
    while(low<=high)
      {
          mid=low+high/2;
          if (ar[mid]==number)
          {
            flag=0;
            break;
          }
          else
          if(number>ar[mid])
            low=mid+1;
          else
            high=mid-1;
      }
        if(flag==0)
            printf("number found at %d",mid+1);
        else
            printf("number not found\n");
}
