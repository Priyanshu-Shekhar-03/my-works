#include<iostream>
#include<vector>
using namespace std;

int rectangularsum(vector <vector <int> > &matrix, int l1, int r1,int l2,int r2)
{
	int sums=0;
	// method 1
//	for(int i=l1;i<=l2;i++)
//	{
//		for(int j=r1;j<=r2;j++)
//		{
//			sums+=matrix[i][j];
//		}
//	}
//	return sums;



//method 2
//prefix sum row wise
for (int i=0;i<matrix.size();i++)
{
	for(int j=1;j<matrix[0].size();j++)
	{
		matrix[i][j]+=matrix[i][j-1];
	}
}

		for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[i].size();j++)
		{
			cout<<matrix[i][j]<<" ";
		}cout<<endl;
    }
		
for(int i=l1;i<=l2;i++)
{

	
		if(r2!=0)
		{
			sums+=matrix[i][r2]-matrix[i][r1-1];
		}
		else{
			sums+=matrix[i][r2];
		}
	
}

return sums;
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector <int> > matrix(n, vector<int> (m) );
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>matrix[i][j];
		}
	}

	int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;
	

	
	int sum= rectangularsum(matrix,l1,r1,l2,r2);
	cout<<sum;
}
