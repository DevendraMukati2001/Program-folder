//no ki frequency
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    return 0;
}*/
//character kii freqency
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    //precompute
    //int hash[26]={0};
    int hash[256]={0};
    for(int i=0;i<s.size();i++)
    {
        //hash[s[i]-'a']++;
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char number;
        cin>>number;
        //fetch
        //cout<<hash[number-'a']<<endl;
        cout<<hash[number]<<endl;
    }
    return 0;
}
