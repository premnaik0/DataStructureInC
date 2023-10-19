//linear search
#include <stdio.h>
void main()
{
    int n[5],a,flag=1,i;
    printf("Enter a array numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Enter number to find: ");
    scanf("%d",&a);
    for(i=0;i<5;i++)
    {
        if(n[i]==a)
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("Not found");
    }
    else
    {
        printf("Found at index position: %d",i);
    }
}
