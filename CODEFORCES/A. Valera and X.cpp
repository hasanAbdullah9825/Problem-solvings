#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c,a,b;
    set<char>diagonal,others;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i==j)||(i==n-j-1))
            {
                cin>>c;
                diagonal.insert(c);
                a=c;
            }
            else
            {
                cin>>c;
                others.insert(c);
                b=c;
            }
 
        }
 
    }
    if(diagonal.size()==1 && others.size()==1 && a!=b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
 
}


