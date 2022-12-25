#include<stdio.h>
int main()
{
    int arr[100],i,n,search;
    printf("Enter the Range of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements to be searched\n");
    scanf("%d",&search);
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]<search)
        start=mid+1;
        else if(arr[mid]==search)
        {
            printf("Elements found at location %d",mid+1);
            break;
        }
        else
        end=mid-1;
        mid=(start+end)/2;
    }
    if(start>end)
    {
        printf("Entered Wrong");
    }
    return 0;
}
