#include<bits/stdc++.h>
using namespace std;
int main()
 
{
    long long int l,r;
    cin>>l>>r;
    long long  int cnt=0;
    long long int x=(r-l+1)/2;
    cout<<"YES"<<endl;
    for(long long int  i=l;i<=r;i+=2)
    {  if(cnt==x){break;}
        cout<<i<<" "<<i+1<<endl;
 
        cnt++;
 
    }

    return 0;
}
