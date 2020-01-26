#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,count=0,mx,now_total=0;
    cin>>mx;


    for(int i=1;;i++)
    {
        sum+=i;
        now_total+=sum;
        if( now_total>mx)
        {
            break;
        }
        count++;


    }
    cout<<count<<endl;
    return 0;
}
