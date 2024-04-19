#include<iostream>
using namespace std;

int main()
{
	char a[20];
	cout<<"Write your name:";
	cin>>a;
	int b,c,d,e,f;
	float g;
	cout<<"Write your marks of maths:";
	cin>>b;
	cout<<"write your marks of physics:";
	cin>>c;
	cout<<"Write your marks of chemistry:";
	cin>>d;
	cout<<"Write your marks of biology:";
	cin>>e;
	cout<<"write your marks of english:";
	cin>>f;
	g=(float)((b+c+d+e+f)*100)/500;
	cout<<g<<"%"<<endl;
	
	
	if(g>=33)
	{
		cout<<"congratulations  you are pass:";
	}
	else
	{
		cout<<"better luck next time";
	}
}
