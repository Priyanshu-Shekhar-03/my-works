#include<iostream>
using namespace std;

int main(){
	int x=18;
	float y=7.2;
	//creating a pointer to store the address of x
	//as x is of integer type so we need to create a pointer of integer data tytpe
	int *ptr=&x;
	//creating a pointer to store the address of y
	//as y is of float data type so we need to create a pointer of float data type
	float *ptrf=&y;
	cout<<"Address stored inside the ptr  "<<ptr<<endl;
	cout<<"value stored in the address stored at ptr  "<<*ptr<<endl;   //derefrence operator
	cout<<"Address stored inside the ptrf  "<<ptrf<<endl;
		cout<<"value stored in the address stored at ptrf  "<<*ptrf<<endl;   //derefrence operator
		
		
		//_____________
		x=23; //x is updated with 23
		//the updated value of x is still stored in the same bucket
		// if we dereference the ptr we will get the updated value of ptr;
		cout<<"updated value of the ptr: "<<*ptr<<endl;
}
