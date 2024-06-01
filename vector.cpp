//vector input output name
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<int>l;
   for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        l.push_back(element);
    }
 // cout<<l.front();
    for(int i=0;i<l.size();i++)
    {
        cout<<l[i]<<" ";
    }
}









/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;
    v.push_back({1,2});
    v.emplace_back(1,2);
    vector<int> v(5,100);
    vector<int> v(5);
    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it =v.begin();  //iterator mtlb pointer hi h jese array to pointer krte the indexing ke liye vesee hi iterator use krte vector me
    //syntax- vector<datatype>scope resolution operator::iterator yaha kuch bi naam dede =v.begin mtlb phla element
    it++;
    cout<<*(it)<<" ";
    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end(); //remember end mtlb last nhi blki usse agla jo nhi h
/*--etne pure ki jgh me--*/ auto it=v.rend() //eska mtlb phla ke phla memory allocation
   /* auto it=v.rbegin();
    for(vector<int>::iterator it=v.begin;it!=v.end();it++)
    {
     cout<<*(it)<<" ";
    }
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    for(auto it:v)  //for each loop
    {
        cout<<it<<" ";
    }
    v.erase(v.begin()+1); //erase function erase element in vector

    v.erase(v.begin()+2,v.begin()+4);

    //insertion function
    vector<int>v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    vector<int> copy(2,50); //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

    //{10,20}
    cout<<v.size(); //2
    //{10,20}
    v.pop_back();//{10}
    //v1 ->{10,20}
    //v2 ->{30,40}

    v1.swap(v2); //v1={30,40} v2={10,20}
    v.clear();  //erases the entire vector


    cout<<v.empty();
}*/


#include<iostream>
using namespace std;
int main()
{
  int arr[5]={1,2,3,5,6};
  for(int e:arr)
        cout<<e<<" ";
}

