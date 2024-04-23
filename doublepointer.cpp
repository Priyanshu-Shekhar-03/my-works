#include<iostream>
using namespace std;

//pointer function
void update(int **p)
{
//	p=p+1;
	//kuch hoga ki nai - No
	*p=*p +1;
	//isme bhi kch hga ki nai -Yes
	
//	**p=**p+1;
	//kya isme kuch hga - Yes
}

// double pointer
 int main(){
 	int x=5;
 	int *p=&x;
 	int **p2=&p;
 	
// 	cout<<p1<<endl;
// 	cout<<*p1<<endl;
// 	cout<<&p1<<endl;
// 	cout<<*p2<<endl;
// 	cout<<x<<" "<<*p1<<" "<<**p2;


cout<<"before"<< x<<endl;
cout<<"before"<<p<<endl;
cout<<"before"<<p2<<endl;

cout<<endl<<endl;
update (p2);
cout<<"after"<<x<<endl;
cout<<"after"<<p<<endl;
cout<<"after"<<p2<<endl;

 }
