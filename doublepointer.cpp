#include<iostream>
using namespace std;

// double pointer
 int main(){
 	int x=5;
 	int *p1=&x;
 	int **p2=&p1;
 	
 	cout<<p1<<endl;
 	cout<<*p1<<endl;
 	cout<<&p1<<endl;
 	cout<<*p2<<endl;
 	cout<<x<<" "<<*p1<<" "<<**p2;
 }
