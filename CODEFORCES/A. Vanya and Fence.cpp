
#include<bits/stdc++.h>
using namespace std;
int main()
{int n,h,count=0,v;
cin>>n>>h;
int store[n];
for(int i=1;i<=n;i++)
{cin>>v;
store[i]=v;

}
for(int i=1;i<=n;i++)
{
    if(store[i]<=h)
    {
        count++;
    }
    else
    {
        count+=2;
    }
}


cout<<count;
return 0;




}
