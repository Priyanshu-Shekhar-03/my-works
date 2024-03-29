#include<iostream>
using namespace std;

int main()
{
	int arr[1000];
	int i,j=0,n;
	
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	k=k%n;
	
	int a[1000];
	for(i=n-k;i<n;i++)
	{
		a[j++]=arr[i];
	}
	for(i=0;i<=k;i++)
	{
		a[j++]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
