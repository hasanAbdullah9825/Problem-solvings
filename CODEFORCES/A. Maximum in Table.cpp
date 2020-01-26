#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[12][12];
    if(n==1)
        cout<<"1"<<endl;

    else
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                a[1][j]=1;
                a[j][1]=1;

            }
        }



        for(int i=2; i<=n; i++)
        {
            for(int j=2; j<=n; j++)
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }


        cout<<a[n][n]<<endl;


    }
    return 0;
}
