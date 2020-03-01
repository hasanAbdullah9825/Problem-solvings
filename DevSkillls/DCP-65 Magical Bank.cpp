#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
for(int j=0;j<t;j++){

    int x;
    cin>>x;
    int answer=ceil(((sqrt(1.0+(8*x)))-1.0)/2.0);
    cout<<answer<<endl;
}
return 0;
}
