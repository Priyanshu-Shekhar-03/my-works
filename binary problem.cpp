#include<iostream>
using namespace std;

int search(int arr[],int n,int target)
{
	int start=0, end= n-1, first= -1, mid;
	
	while(start<=end)
	{
	   mid= start+ (end-start)/2;
	   if(arr[mid]==target)
	   {
	   	first= mid;
	   	end= mid-1;
	   }
	   else if (arr [mid]<target)
	   start=mid+1;
	   else
	   end= mid-1;
	   
		   	
	}
	return first;
}


int binary(int arr[],int n,int target)
{
	int start=0, end= n-1, last= -1, mid;
	
	while(start<=end)
	{
	   mid= start+ (end-start)/2;
	   if(arr[mid]==target)
	   {
	   	last= mid;
	   	start= mid-1;
	   }
	   else if (arr [mid]<target)
	   start=mid+1;
	   else
	   end= mid-1;
	   
		   	
	}
	return last;
}

int main()
{
	int arr[1000];
	int n,i,target;
	cout<<"enter the size of array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element "<<i<<": ";
		cin>>arr[i];
		
	}
	cout<<"enter the target: ";
		cin>>target;
		
		cout<<"first "<<search(arr,n,target)<<"last "<<binary(arr,n,target);
		return 0;
		
}
