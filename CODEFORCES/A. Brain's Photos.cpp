#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,black,calor=0;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if( arr[i][j]=='Y'||arr[i][j]=='C'||arr[i][j]=='M'  )
            {
                calor++;
            }
        }
    }









    if(calor>0)
    {
        cout<<"#Color"<<endl;
    }
    else
     cout<<"#Black&White"<<endl;

    return 0;


}
