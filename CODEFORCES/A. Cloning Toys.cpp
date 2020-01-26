#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fake,original;
    cin>>fake>>original;
    int x=original-1;
 
 
    if(fake<original)
    {
        if(original-fake!=1)
        {
            cout<<"No"<<endl;
            return 0;
        }
 
    }
 
    if(original==0)
    {
        cout<<"No"<<endl;
        return 0;
    }
 
 
    if(original==1)
    {
        if(fake==0)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
 
 
    if((fake-x)%2==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
 
 
    return 0;
}



