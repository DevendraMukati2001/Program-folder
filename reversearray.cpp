#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"after reversing::";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
