#include<iostream>
using namespace std;

int main()
{
	int arr[1000];
	int n,i,j;
	cout<<"enter the size of array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element" <<i<< ": ";
		cin>>arr[i];
	}
	for(i=n-2;i>=0;i--)
	
	{
		for(j=0;j<=i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				swap(arr[j],arr[j+1]);
		    }
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
		cout<<endl;
	}
}
