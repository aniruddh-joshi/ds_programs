#include<stdio.h>
#include<stdlib.h>

void insertion(int A[],int n)
{
    int i,j,x;
    int c=0;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=A[i];
        while(j>=0 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
        c++;
    }
    printf("Count is:-%d",c);
    printf("\n");
}
int main()
{
	int A[100],n,i;
	printf("Enter the range of Numbers\n");
	scanf("%d",&n);
	printf("Enter the elements in the list\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	insertion(A,n);
	printf("Sorted List is :- ");
	for(i=0;i<n;i++)
	
		printf("%d ",A[i]);
	printf("\n");
	return 0;
}
