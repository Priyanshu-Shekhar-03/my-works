#include<iostream>
using namespace std;

int stairs(long long n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    int ans= stairs(n-1)+stairs(n-2);

    return ans;
    
}

int main()
{
    int n;
    cin>>n;
    cout<<stairs(n);
}