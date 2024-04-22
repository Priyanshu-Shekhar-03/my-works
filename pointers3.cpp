#include<iostream>
using namespace std;

int main(){
	//wild pointer 
//	int *ptr;
//	cout<<ptr<<" "<<*ptr<<endl;
	
	//null pointer 
//	int *p1= NULL;
//	cout<<p1<<" "<<endl;


//void pointer 
//float a=9.3;
//int x= 10;
//void *ptr=&a;
//ptr= &x;
//// since void poiter cannot be directly dereferenced 
//int *pointer=(int *)ptr;
//cout<<*pointer;                 //type casting to derefernece the void pointer

int x=15;
int ptr=&x;
cout<<ptr;
}
