#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b;
   int div,mod;
   cin>>a>>b;
   int sum=a;
   while(a>=b)
   {div=a/b;
   sum=sum+div;
   mod=a%b;
   a=div+mod;

   }
   cout<<sum<<endl;
   return 0;



}
