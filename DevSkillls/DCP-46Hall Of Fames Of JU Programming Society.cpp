#include<bits/stdc++.h>
using namespace std;
int main(){
int test_case;
scanf("%d",&test_case);

for(int i=0;i<test_case;i++){
   long long int  x,y;
   long long int avg;
    cin>>x>>y;
     if(y>x){
        avg= x+(y-x)/2;
     }

     else if(x>y){
        avg= y+(x-y)/2;
     }
     else
     {
       avg=x;
     }
     cout<<avg<<endl;
}
return 0;

}
