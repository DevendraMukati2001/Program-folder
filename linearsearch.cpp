//linear search
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],pos=-1,value,i;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"which no jo tumhe dundna";
    cin>>value;
    for(i=0;i<n;i++)
    {
        if(value==arr[i])
        {
        pos=i++;
        break;
        }
    }
    if(pos==-1)
    cout<<"no is not found"<<value;
    else
    cout<<"no is found is:"<<value<<"and index of poistion is:"<<pos;
}*/
#include<iostream>
using namespace std;
int main()
{
 int n,temp,rev=0;
 cin>>n;
 while(n>0)
 {
     temp=n%10;
     rev=(rev*10)+temp;
     n=n/10;
 }
 cout<<rev;
}
