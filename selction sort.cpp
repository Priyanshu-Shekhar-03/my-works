#include<iostream>
using namespace std;

int main()
{
	int arr[1000];
	int i,j,n;
	cout<<"enter the size of array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the elements";
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		int index=i;
		for(j=1+i;j<n;j++)
		{
			if(arr[j]<arr[index])
			index=j;
		}
		swap(arr[i],arr[index]);
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
}
