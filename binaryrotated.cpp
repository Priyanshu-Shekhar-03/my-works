#include<iostream>
using namespace std;
// 1 2 3 4 5 6

int getpivot (int arr[],int n)
{
    int s=0;int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binary_search(int arr[], int start,int end,int key)
{
   int  s=start;
   int  e=end;
   int mid= s+ (e-s)/2;
    
    int target=-1;
   while (s<=e)
   {
    /* code */
    if(arr[mid]==key)
    {
        target= mid;
    }
 else   if(arr[mid]<key)
    {
       s=mid+1;
    }
    else
    {
        e=mid-1;
    }
    mid=s+(e-s)/2;

   }
   return target;
   
}


int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int key;
    

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key";
    cin>>key;

    cout<<"the pivot index is:"<<getpivot(arr,n)<<endl;
    int pivot=getpivot(arr,n);
    int index;
    if(key>=arr[pivot] && key<=arr[n-1])
    {
        index= binary_search(arr,pivot,n-1,key);
    }
    else{
        index=binary_search(arr,0,pivot-1,key);
    }
    cout<<"the targeted value is present at"<<index;

}