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
	   cout<<"enter the element "<<i<<": ";
	   cin>>arr[i];
    }
    
    for(i=1;i<n;i++)
    {
    	for(j=i;j>0;j--)
    	{
    		if(arr[j]<arr[j-1])
    		swap(arr[j],arr[j-1]);
    		else
    		break;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
}
