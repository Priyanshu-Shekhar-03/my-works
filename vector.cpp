#include<iostream>
#include<vector>
using namespace std;

int LargestElementIndex(int arr[], int n)
{
	int max=INT_MIN;
	int index=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			index=i;
		}
	}
	return index;
}

int main()
{
	int arr[1000];
	int i, j, n;
	cout<<"ENter the size of array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxele= LargestElementIndex(arr,n);
	arr[maxele]=-1;
	int secmax= LargestElementIndex(arr,n);
	cout<<arr[secmax];
}
	
