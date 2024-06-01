//#include<iostream>
#include<bits/stdc++.h> //this header file include all header file
using namespace std;
int main()
{
   // pair<int,float>p= {1,3.5};     //pair is the nested property of pair
   // cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>> p = {1,{3,4}};
   // cout<<p.first<<" "<<p.second<<" "<<p.second; //this line was error due to conflicting declaration has doubled pair correct agli line
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<" ";
   pair<int,int> arr[]={{1,2},{2,5},{5,1}};
   cout<<arr[1].second<<" "<<arr[1].first;


}
