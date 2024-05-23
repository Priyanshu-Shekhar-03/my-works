#include<iostream>
using namespace std;

bool is_sorted(int arr[],int size)
{
    if(size==0||size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool check=is_sorted(arr+1,size-1);
        return true;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=is_sorted(arr,n);
    if(ans){
        cout<<"the array is sorted:";
    }
    else{
        cout<<"the array is not sorted:";
    }
}