#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,count=1;
    int a[100001];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        a[i]=x;

    }

    for(int j=1;j<n;j++)
    {
        if(a[j]!=a[j+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
