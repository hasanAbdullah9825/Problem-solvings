#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
    vector<long long int>v;
 
    for( int i=0; i<n; i++)
    {
        long long int x;
        cin>>x;
        v.push_back(x);
    }
sort(v.begin(),v.end());
for(int i=0;i<n-2;i++)
{
  if(v[i]+v[i+1]>v[i+2])
  {
      cout<<"YES"<<endl;
      return 0;
  }
}

 
cout<<"NO"<<endl;
return 0;
 
 
}
