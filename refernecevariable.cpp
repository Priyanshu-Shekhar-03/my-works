#include<iostream>
using namespace std;

//void update1(int &n)
//{
//	n++;
//}
//
//
//
//void update(int n)
//{
//	n++;
//}
//
//int main()
//{
///*	int i=5;
//	int &j=i;
//	
//	cout<<i<<endl;
//	i++;
//	cout<<i<<endl;
//	j++;
//	cout<<i<< endl;*/
//	
//	int n=5;
//	cout<<"before"<<n<<endl;
//	update1(n);
//	cout<<"after"<<n<<endl;
//	
//}

int getsum(int *arr ,int n)
{
	int sum= 0;
	for (int i=0;i<n;i++){
		sum+=arr[i];
		
	}
	return sum;
}




int main(){
	int n;
	cin>>n;
	int *arr= new int[n];
	
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	int ans= getsum(arr,n);
	cout<<"answer is "<<ans;
	
}
