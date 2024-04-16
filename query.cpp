#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	const int N=1e5+10;
	vector<int>freq(N,0);
	for(int i=0;i<n;i++)
	{
		freq[v[i]]++;
	} 
	cout<<"enter queries: ";
	int Q;
	cin>>Q;
	while(Q--)
	{
		int query_element;
		cin>>query_element;
		cout<<freq[query_element];
	}
	return 0;
}
