#include<iostream>
using namespace std;
int FirstOccrns(int arr[],int n,int key)
{
    int ans;
    int s =0;
    int e = n-1;
    int mid = (s+e)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            e = mid -1;
        }
       else if(key>arr[mid])
        {
            s = mid+1;
        }
        else if(key<arr[mid])
        {
        e = mid-1;
        }
        mid = (s+e)/2;
        
    }
    return ans;
    
    if (ans==0)
    return -1;
}
int LastOccrns(int arr[],int n,int key)
{
    int ans;
    int s =0;
    int e = n-1;
    int mid = (s+e)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            s = mid +1;
        }
       else if(key>arr[mid])
        {
            s = mid+1;
        }
        else if(key<arr[mid])
        {
        e = mid-1;
        }
        mid = (s+e)/2;
        
    }
    return ans;
    if (ans ==0)
        return -1;
}
int main()
{
    int index;
    int Index;
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the element in given array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key to find its first and last occurrence"<<endl;
    cin>>key;
    index = FirstOccrns(arr,n,key);
    Index = LastOccrns(arr,n,key);
    cout<<"first occurence of "<< key << " is "<<index<<endl;
    cout<<"last occurence of "<<key <<"  is "<<Index<<endl; 
}