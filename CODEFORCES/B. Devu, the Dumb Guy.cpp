#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    long long int ans=0;
    vector< long long int>v;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        int z;
        cin>>z;
        v.push_back(z);
    }
 
    sort(v.begin(),v.end());
    for( int i=0;i<n;i++)
    {
        ans+=(v[i]*x);
        if(x!=1)
        {
            x--;
        }
    }
 

    cout<<ans<<endl;
}
