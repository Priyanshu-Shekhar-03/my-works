#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0,e=n-1;
    int mid= s+ (e-s)/2;
    while (s<e)
    {
        /* code */
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    cout<<"the peak index is "<<s<<endl<<"the peak value is"<<arr[s];

    
}