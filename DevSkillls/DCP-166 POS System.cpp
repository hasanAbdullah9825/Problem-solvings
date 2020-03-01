#include<bits/stdc++.h>
using namespace std;

int main(){

vector< pair<double, int> >v;
int t;
cin>>t;

for(int i=0;i<t;i++){

    int n,give,ans;
    double sum=0;
    cin>>n;
    for(int j=0;j<n;j++){
        double p;
        int q;
        cin>>p>>q;
        v.push_back(make_pair(p,q));


    }
    cin>>give;
    for(int k=0;k<v.size();k++){
        sum+=((v[k].first)*(v[k].second));

    }
    ans=give-sum;
    printf("Case %d: %d\n",i+1,ans);


    v.clear();
}

return 0;
}
