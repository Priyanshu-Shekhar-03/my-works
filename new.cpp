#include<iostream>
using namespace std;
int first_occurence(int arr[], int size,int key)
{
   int  s=0;
   int  e=size-1;
   int mid= s+ (e-s)/2;
    int first=-1;
    
   while (s<=e)
   {
    /* code */
    if(arr[mid]==key)
    {
        first= mid;
        e=mid -1;
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
   return first;
   

}
int last_occurence(int arr[],int size,int key)
{
    int last=-1;
    int s=0;
    int e=size-1;
    int mid= s+(e-s)/2;
    while (s<=e)
    {
        /* code */
        if (arr[mid]==key)
        {
            /* code */
            last=mid;
            s=mid+1;
        }
        else if (arr[mid]<key)
        {
            /* code */
            s=mid+1;
        }
         else
    {
        e=mid-1;
    }
    mid=s+(e-s)/2;
        
        
    }
    
    return last;
}

int main()
{
    int arr[100];
    int n;
    cout<<"enter the size of array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key";
    cin>>key;
    int first_occ= first_occurence(arr,n,key);
    int last_occ= last_occurence(arr,n,key);
    cout<<"first occurence: "<<first_occ<<endl;
    cout<<"last occurence: "<<last_occ<<endl;
    int total_occ;
    total_occ=(last_occ-first_occ)+1;
    cout<<"total no of occurence"<<total_occ;
}