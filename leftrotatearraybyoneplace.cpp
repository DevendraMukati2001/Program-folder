#include<bits/stdc++.h>
using namespace std;
int rotatearray(int arr[],int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {

        arr[i-3]=arr[i];
    }
    arr[n-1]=temp;
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
    rotatearray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
