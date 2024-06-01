#include<iostream>
using namespace std;
int removeduplicate(int arr[],int n)
{
    int j,i=0;
    for(j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    removeduplicate(arr,n);
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
