#include<stdio.h>
#include<stdlib.h>

void insertion(int A[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
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
