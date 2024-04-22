#include<iostream>
using namespace std;
////call by reference using pointers
//void swap(int *x,int *y)
//{
//	int temp=*x;
//	*x=*y;
//	*y=temp;
//	
//}
//int main()
//{
//	int x,y;
//	cin>>x>>y;
//	int *p1= &x;
//	int *p2= &y;
//	swap(p1,p2);
//	cout<<x<<" "<<y;
//	return 0;
//}

//void firstandlast(string s,char ch,int*first,int *last)
//{
//	for(int i=0;i<s.size();i++)
//	{
//		if(s[i]==ch){
//		
//		*first=i;
//		break;
//	   }
//	}
//	for(int i=s.size()-1;i>=0;i--)
//	{
//		if(s[i]==ch){
//		
//		*last=i;
//		break;
//	}
//	}
//}
//
//
//int main(){
//	string s= "aaabac";
//	char ch ='a';
//int	first =-1;
//int	last=-1;
//int *p1=&first;
//int *l1=&last;
// firstandlast(s,ch,p1,l1);
// cout<<*p1<<" "<<*l1<<endl;
// cout<<first<<" "<<last;
//}

//int main()
//{
//	int x=20;
//	double db= 9.4;
//	int *ptr=&x;
//	double *ptrd=&db;
//	cout<<"size of variable x= "<<sizeof(x)<<endl;
//	cout<<"size of variable db= "<<sizeof(db)<<endl;
//	cout<<ptr<<" "<<ptr+1<<endl;
//	cout<<ptrd<<" "<<ptrd+1<<endl;
//}


//storing address of elements of arrays in the pointer
int main()
{
	int arr[2]={1,2};
	int *ptr=&arr[0];
//	cout<<ptr<<" "<<*ptr<<endl;
//	cout<<ptr+1<<" "<<*(ptr+1)<<endl;
	cout<<*ptr++<<endl;
	cout<<arr[0]<<" "<<arr[1]<<endl;
	cout<<ptr<<" "<<*ptr<<endl;
	cout<<(*ptr)++<<endl;
	cout<<arr[0]<<" "<<arr[1];
}
