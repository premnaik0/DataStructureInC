#include <stdio.h>
void QuickSort(int n[25],int first, int last)
{
    int i, j, pivot, temp;

    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;

        while(i<j)
        {
            while(n[i]<=n[pivot] && i<last)
            i++;
                while(n[j]>n[pivot])
                j--;
                if(i<j)
                {
                    temp=n[i];
                    n[i]=n[j];
                    n[j]=temp;
                }
        }
                temp=n[pivot];
                n[pivot]=n[j];
                n[j]=temp;
                QuickSort(n,first,j-1);
                QuickSort(n,j+1,last);
    }
}

int main()
{
    int i,count,n[25];

    printf("Enter size of array\n");
    scanf("%d",&count);

    printf("Enter %d of array\n",count);
    for(i=0;i<count;i++)
    {
        scanf("%d",&n[i]);
    }

    QuickSort(n,0,count-1);

    printf("Array after sorting:\n");
    for(i=0;i<count;i++)
    {
        printf("%d\n",n[i]);
    }
}
