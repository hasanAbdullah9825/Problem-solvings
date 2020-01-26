#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n,k;
    cin>>n>>k;
 
    int a[150005];
    for(int i=1; i<=n; i++)
    {
       cin>>a[i];
 
    }
 
    for(int i=1; i<n; i++)
    {
        a[i+1]+=a[i];
 
    }
  long long int Minimum =1e16;
    int ans;
 
    for(int i=1; i<=n-k+1; i++)
    {
        int x=a[i+k-1]-a[i-1];
 
        if(Minimum>x)
        {
            Minimum=x;
            ans=i;
 
        }
 
    }

    cout<<ans<<endl;
    return 0;
 
}
