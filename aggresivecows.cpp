#include<iostream>
#include<vector>
using namespace std;

bool is_possible(vector<int> arr,int mid,int size, int cows)
{
    int cow_count=1;
    int last_pos=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]-last_pos>=mid)
        {
            cow_count++;
            if(cow_count==cows)
            {
                return true;
            }
        }
        

    }
    return false;

}
int main()
{
    vector<int> a;
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        a.push_back(ele);

    }
    sort(a.begin(),a.end());

    int m;
    cout<<"enter the no of cows:";
    cin>>m;
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans =-1;
    while(s<=e)
    {
        if(is_possible(a,mid,n,m))
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-5;
        }
        mid=s+(e-s)/2;

    }
    cout<<ans;
}