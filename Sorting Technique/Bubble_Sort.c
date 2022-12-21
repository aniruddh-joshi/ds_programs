#include<stdio.h>
#include<stdlib.h>

void swap(int*x,int*y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void Bubble(int A[],int n)
{
	int i,j,flag=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				swap(&A[j],&A[j+1]);
				flag=1;
			}
		}
		if(flag==0)
		printf("\nList is already Sorted");
		break;
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
	Bubble(A,n);
	printf("\nSorted List is :- ");
	for(i=0;i<n;i++)
	
		printf("%d ",A[i]);
	printf("\n");
	return 0;
}
