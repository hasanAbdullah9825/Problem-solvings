
#include<bits/stdc++.h>
using namespace std;
int main()
{int a,b,c;
cin>>a>>b>>c;

vector<int>v;


v.push_back((a+b*c));
v.push_back(a*b+c);
v.push_back(a*(b+c));
v.push_back(a+(b*c));
v.push_back((a*b)+c);
v.push_back((a+b)*c);
v.push_back(a*b*c);
v.push_back(a+b+c);

sort(v.begin(),v.end());
int m= max (v[0],v[7]);
cout<<m<<endl;

}
