#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
 
    int B=0,u=0,l=0,b=0,a=0,s=0,r=0;
 
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='B')
            B++;
        if(str[i]=='u')
            u++;
        if(str[i]=='l')
            l++;
        if(str[i]=='b')
            b++;
        if(str[i]=='a')
            a++;
        if(str[i]=='s')
            s++;
        if(str[i]=='r')
            r++;
 
    }
 
    int ans=min(B,min(b,min(u/2,min(a/2,min(s,min(r,l))))));
    cout<<ans<<endl;
 
}


