#include<iostream>
using namespace std;

int main()
{
	int n,i, sum;
	cout<<"Enter your numer:";
	cin>>n;
	sum=0;
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+i;
	}

       cout<<"sum of numbers are :"<<sum;
}
