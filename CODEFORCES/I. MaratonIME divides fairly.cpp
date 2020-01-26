#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long int a,b,c;

        long long int arr[3];
        cin>>a>>b;
        c=a+b;
        long long int d=c/2;
        long long int d1=d+1;
        arr[0]=a;
        arr[1]=b;
        if(arr[0]==arr[1])
        {
            cout<<"Ok"<<endl;
        }
        else if(abs(a-b)==1)
        {
            cout<<"Ok"<<endl;
        }
        else
        {
            if(c%2==0)
            {
                cout<<d<<" "<<d<<endl;
            }

            else
            {
                cout<<d<<" "<<d1<<endl;



            }


        }


    }

    return 0;

}
