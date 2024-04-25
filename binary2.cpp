#include<iostream>
using namespace std;
int Binarysearch (int arr[], int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2
	while(start<=end)
	{
		if(arr[mid] ==key)
		{
			return mid;
		}
		//traverse right side
		else if(key>arr[mid])
		{
			start+=1;
		}
		//key<arr[mid] so traverse left side
		else
		{
			end-=1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}

int main()
{
	int m;
	cin>>m;
	int arr1[100];
	for(int i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
	
	
	int key;
	cin>>key;
	for(int i=0;i<m;i++)
	{
		cout<<arr1[i];
	}cout<<endl;
	
	
	int result=Binarysearch(arr1,m,key);
	cout<<"index of key is: "<<result;
	
}
