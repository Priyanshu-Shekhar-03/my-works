#include<iostream>
#include<vector>
using namespace std;

void sortOfSquares( int arr ,int n)
{
	int ans[1000];
	int left_ptr=0, right_ptr=n-1;
	while(left_ptr<right_ptr)
	{
		if(abs(arr[left_ptr])<abs(arr[right_ptr]))
		{
			ans=arr[right_ptr]*arr[right_ptr];
			right_ptr--;
		}
		else{
			ans=arr[left_ptr]*arr[left_ptr]);
			left_ptr++;
		}
		
	}
	for(int i=0;i<v.size;i++)
	{
		cout<<ans[i]<<"  ";
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	arr[1000];
	for(int i=0;i<n;i++)
	{
		
		cin>>arr[i];
	}
	sortOfSquares (arr.n)
}
