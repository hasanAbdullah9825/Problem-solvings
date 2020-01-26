#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int need_stp;
    long long int dis;
    cin>>dis;
    if(dis%5==0)
    {
        cout<<dis/5<<endl;
    }
    else
    {
        cout<<(dis/5)+1<<endl;
    }
    return 0;
}
