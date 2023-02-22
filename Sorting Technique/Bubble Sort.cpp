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
	for(int i=0;i<n;i++){
	for(int j=0;j<n-1;j++){
		if(arr[j]>arr[j+1])
		swap(arr[j],arr[j+1]);
	}
	}
	//Bubble Sort ends
	cout<<"Sorted List is:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
