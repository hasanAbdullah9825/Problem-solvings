#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,fashionable_socks,same_socks;
    vector<int>v;
    cin>>a;
    v.push_back(a);
    cin>>b;
    v.push_back(b);
    sort(v.begin(),v.end());

    if(v[1]!=v[0])
    {
        fashionable_socks=v[0];
        same_socks=(v[1]-v[0])/2;
        cout<<fashionable_socks<<" "<<same_socks<<endl;

    }
    else
    {
        fashionable_socks=v[0];
        cout<<fashionable_socks<<" "<<"0"<<endl;

    }

    return 0;

}
