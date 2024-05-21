#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<"  ";
    print(n-1);
    cout<<endl;

    



}

void printing(int n)
{
    if(n==0)
    {
        return;
    }
    printing(n-1);
    cout<<n<<"  ";
}

int main()
{
    int n;
    cin>>n;
    print(n);
    printing(n);
}