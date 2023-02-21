#include <iostream>
#include <math.h>
using namespace std;
 
int jumpSearch(int arr[], int n, int key)
{
    int start = 0;
    int end = sqrt(n);
    
    while(arr[end] < key && end < n){
        start = end;
        end = end + sqrt(n);
        if(end > n - 1)
           end = n-1;
    }
	   for(int i = start; i <= end; i++) { 
      if(arr[i] == key)
         return i;
    }
    return -1;
}

int main(void)
{
    int arr[20];
    int n,key;
    cout<<"Enter the range\n";
    cin>>n;
    cout<<"Enter the sorted elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched\n";
    cin>>key;
   
    int result = jumpSearch(arr, n, key);
    if(result == -1){
        cout << "Element is not in the array :-(";
    } else {
        cout << "Element found at position : " << result+1;
    }
    return 0;
}
