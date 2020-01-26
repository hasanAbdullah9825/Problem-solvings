#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int n,x;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=1; i<v.size(); i++)
    {
        if(v[i]==1)
            v1.push_back(i);
        if(v[i]==2)
            v2.push_back(i);
        if(v[i]==3)
            v3.push_back(i);

    }

    int s1,s2,s3,team=0;
    s1=v1.size();
    s2=v2.size();
    s3=v3.size();
    int  M=min(s1,min(s2,s3));

    if((s1>=M ) && (s2>=M) && (s3>=M))
    {
        team=M;


    }
    cout<<team<<endl;

    for(int i=0; i<M; i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }

    return 0;


}
