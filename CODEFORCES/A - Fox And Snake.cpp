#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m, nt=2;
    cin>>n>>m;
    for(int i=1; i<=n; i++) //for 1 to  n line
    {
        if(i%2!=0)
        {
            for(int j=1; j<=m; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(nt%2==0)
            {
                for(int k=1; k<m; k++)
                {
                    cout<<".";
                }
                cout<<"#"<<endl;
                nt++;
            }
            else
            {
                cout<<"#";
                for(int l=1; l<m; l++)
                {
                    cout<<".";
                }
                cout<<endl;
                nt++;
            }

        }

    }


    return 0;

}

