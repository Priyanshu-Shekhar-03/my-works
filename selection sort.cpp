#include<iostream>
using namespace std;

int main()
{
	int arr[100];
	int i,j,n;
	cout<<"enter the size of array ";
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cout<<"enter the element "<<i<<" ";
		cin>>arr[i];
	}
	for(i=n-2;i>=0;i--)
	{
		
		for(j=0;j<=i;j++)
		{
			if(arr[j]>arr[j+1])
			{
			
			  swap(arr[j],arr[j+1]);
			  
		    }
		     
		}
		
	}
	
	for(i=0;i<=n-1;i++)
	{
		cout<<arr[i];
		cout<<endl;
	}
	int start=0,mid,end=n-1,key;
	cout<<"enter the key";
	cin>>key;
	while(start<=end)
	{
		mid=(start+end)/2;
	    if(arr[mid]==key)
	    {
	    	cout<<"got it"<<endl<<mid;
	    	break;
		}
		else if(arr[mid]<key)
		start=mid+1;
		else 
		end=mid-1;
		
	}
	
}
