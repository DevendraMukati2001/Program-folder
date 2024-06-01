/*#include<iostream>
using namespace std;
void sum2(int i,int sum)
{
   if(i<1)
   {
       cout<<sum;
    return ;
   }
   sum2(i-1,sum+i);
}
int main()
{
    int n;
    cin>>n;
    sum2(n,0);
}*/
/*#include<iostream>
using namespace std;
int add(int n)
{

    if(n==0)
        return 0;
    return n+add(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<add(n);
}*/
/*#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;    //in case of multiplication is 1 otherwise 0 krega to pura zero hozayga...
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}*/
//now fibonacci;
#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0)
        return 0;
        if(n==1)
            return 1;
        if(n>1)
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<=n;i++)
    cout<<" "<<fibo(i);
}
