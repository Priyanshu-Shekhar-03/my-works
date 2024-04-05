#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the input: ";
	cin>>num;
	int ans=0, mul = 1, rem;
	
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		ans=rem*mul+ans;
		mul=mul*2;
	}
	cout<<ans<<endl;
}
