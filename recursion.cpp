#include<iostream>
using namespace std;

int factorial(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    //recursive relation
    int small_problem=factorial(n-1);
    int bigger_problem=n*small_problem;
    return bigger_problem;
}
int main()
{
    int n ;
    cin>>n;
    cout<<factorial(n);
}