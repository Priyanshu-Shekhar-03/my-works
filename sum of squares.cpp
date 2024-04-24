#include<iostream>
using namespace std;

int main()
{
	int i,n,sum, num;
	cout<<"enter your number:";
	cin>>n;
	sum=0;
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+i*i;
	}
	cout<<sum;
}
