#include<bits/stdc++.h>
using namespace std;
int main(){
vector< pair<unsigned long long int,unsigned long long int> >v;
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        unsigned long long int p,m;
        scanf("%llu %llu",&p,&m);
        v.push_back(make_pair(p,m));
    }
    sort(v.begin(),v.end());
    if(v[0].first==v[1].first){
        if(v[0].second<v[1].second){
            printf("Case %d: %llu %llu\n",i+1,v[0].first,v[0].second);
        }
        else{
           printf("Case %d: %llu %llu\n",i+1,v[1].first,v[1].second);
        }
    }
    else{
        printf("Case %d: %llu %llu\n",i+1,v[0].first,v[0].second);
    }
    v.clear();

}
return 0;
}
