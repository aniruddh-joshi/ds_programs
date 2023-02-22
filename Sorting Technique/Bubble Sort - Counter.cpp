#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the range"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	//Bubble Sort starts
	int c1=0,c2=0;
	for(int i=0;i<n;i++){
	for(int j=0;j<n-1;j++){
		if(arr[j]>arr[j+1])
		swap(arr[j],arr[j+1]);
		c1++;
		c2++;
	}
	}
	//Bubble Sort ends
	cout<<"if-else statement counter"<<c1<<"\n";
	cout<<"swap statement counter"<<c2<<"\n";
	cout<<"Sorted List is:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
