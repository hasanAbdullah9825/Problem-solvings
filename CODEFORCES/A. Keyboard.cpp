#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string input;
    string LR;
    cin>>LR;
    cin>>input;
    if(LR[0]=='R')
    {




        for(int i=0; i<input.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                if(input[i]==s[j])
                {
                    cout<<s[j-1];
                }


            }

        }
    }

    else

    {
        for(int i=0; i<input.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                if(input[i]==s[j])
                {
                    cout<<s[j+1];
                }


            }

        }

    }
    cout<<endl;
    return 0;

}
