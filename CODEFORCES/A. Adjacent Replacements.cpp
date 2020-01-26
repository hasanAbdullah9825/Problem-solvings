#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
         a[i]=a[i]-1;
        }


    }

    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
    return 0;
}
