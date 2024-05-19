#include<iostream>
#include<vector>
using namespace std;

bool if_possible (vector<int> arr,int mid,int n,int m)
{
    int total=0;
    int painter_count=1;
    for(int i=0;i<n;i++)
    {
        if(total+arr[i]<=mid)
        {
            total+=arr[i];
        }
        else{
            painter_count++;
            if(arr[i]>mid||painter_count>m)
            {
                return false;
            }
            total=arr[i];
        }

    }
    return true;
}
int main()
{
    vector<int> arr;
    int n,m;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the no of painters:";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int s=0,e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(if_possible(arr,mid,n,m))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<"the ans is:"<<ans;
}