#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the range of Numbers\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in the list\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int c1=0,c2=0;
//Selection Sort starts
	for(int i=0;i<n-1;i++)
	{
		int mini=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[mini]){
			mini=j;
			c1++;
		}
		}
		swap(arr[i],arr[mini]);
		c2++;
	}
//Selection Sort ends
cout<<"if-else statement counter"<<c1<<"\n";
	cout<<"swap statement counter"<<c2<<"\n";
	cout<<"\nSorted List is :- "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	printf("\n");
	return 0;
}
