#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A=0,D=0,n;
    string s;
    cin>>n;
    cin>>s;

    for(int i=0; i<=s.length(); i++)
    {
        if(s[i]=='A')
        {
            A++;

        }

        if(s[i]=='D')
        {
            D++;

        }

    }
if(A>D)
{
    cout<<"Anton"<<endl;

}
if(A<D)
{
    cout<<"Danik"<<endl;
}
if(A==D)
{
cout<<"Friendship"<<endl;
}

return 0;



}
