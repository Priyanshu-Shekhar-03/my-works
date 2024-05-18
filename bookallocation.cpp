#include<iostream>
#include<vector>
using namespace std;
int is_possible(vector<int> arr,int mid,int n, int m)
{
    int student_count=1;
    int pagesum=0;
    
    for(int i=0;i<n;i++)
    {
        if(pagesum+arr[i]<=mid)
        {
            pagesum+=arr[i];
        }
        else{
            student_count++;
            if(student_count>m||arr[i]>mid)
            {
                return false;
            }
            pagesum=arr[i];
        }

    }
    return true;
}

int main()
{
    vector<int> arr;
    int n;
    cout<<"enter the size of vector";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int m;
    cout<<"enter the no of students:";
    cin>>m;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int s=0;
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(is_possible(arr,mid,n,m))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
cout<<ans;
}