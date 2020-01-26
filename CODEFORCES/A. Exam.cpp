#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,a,cnt=0;
    cin>>n;
 
    if(n==1||n==2)
    {
        cout<<"1"<<endl;
        cout<<"1"<<endl;
        return 0;
    }
 
    if(n==3)
    {
        cout<<"2"<<endl;
        cout<<"1"<<" "<<"3"<<endl;
 
        return 0;
    }
    if(n==4)
    {
        cout<<"4"<<endl;
        cout<<"3"<<" "<<"1"<<" "<<"4"<<" "<<"2"<<endl;
 
        return 0;
    }
 
    for(int i=1; i<=n; i++)
    {
        if((i%2)!=0)
        {
            v.push_back(i);
            cnt++;
 
        }
    }
 
    for(int i=1; i<=n; i++)
    {
        if((i%2)==0)
        {
            v.push_back(i);
            cnt++;
 
        }
    }
    cout<<cnt<<endl;
 
    for(int i=0; i<=v.size()-1; i++)
    {
        cout<<v[i];
        if(i!=(v.size()-1))
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}


