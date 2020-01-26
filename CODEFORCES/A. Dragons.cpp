#include<bits/stdc++.h>
using namespace std;
int st[100000];//strength
int  bo[100000];//bonous
int sorting(int n)
{
    int swa;
    for(int c=0; c<n-1; c++)
    {
        for(int d=0; d<n-c-1; d++)
        {
            if(st[d]>st[d+1])
            {
                swa=st[d];
                st[d]=st[d+1];
                st[d+1]=swa;
                swap(bo[d],bo[d+1]);
            }
        }
    }
}
int main()
{
    int s,n,xi,yi;
    cin>>s>>n;
    for(int i=0; i<n; i++)
    {
        cin>>xi;
        st[i]=xi;
        cin>>yi;
        bo[i]=yi;
    }
    sorting(n);
    for(int j=0; j<n; j++)
    {
        if(s>st[j])
        {
            s+=bo[j];
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
