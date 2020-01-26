#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    long long int mid;
    int flg=0;
    cin>>n>>k;
    if(n%2==0)
    {
        mid=n/2;
    }
    else
    {
        mid=(n/2)+1;
        flg=1;
    }

    if(k<=mid)
    {
        cout<<(2*k)-1<<endl;
    }
    else
        cout<<(k-mid)*2<<endl;
    return 0;

}

