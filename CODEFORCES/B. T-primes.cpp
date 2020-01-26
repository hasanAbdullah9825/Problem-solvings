# include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx  1000000
ll prime[Mx];
void seive()
{
 
    memset(prime,-1,sizeof(prime));
    for(ll i=4; i<=Mx; i+=2)
    {
        prime[i]=0;
    }
 
    for(ll i=3; i<=Mx; i+=2)
    {
        if(prime[i]==-1)
        {
            for(ll j=2*i; j<=Mx; j+=i)
            {
                prime[j]=0;
            }
        }
 
    }
 
 
 
}
 
 
 
int main()
{
    ll n;
    cin>>n ;
    seive();
 
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        ll s=sqrt(x);
 
        if((x==s*s) && (prime[s]==-1) &&(x!=1))
        {
 
            {
                cout<<"YES"<<endl;
            }
 
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
 
}
