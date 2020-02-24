#include<bits/stdc++.h>
using namespace std;


int main(){
    int test_case;
    scanf("%d",&test_case);

    for(int i=0;i<test_case;i++){
        int n;
        vector< pair <int,string> >v;
        vector< pair <int,string> > it;

        cin>>n;
        for(int j=0;j<n;j++){
            string a;
            int b;
            cin>>a>>b;
            v.push_back(make_pair(b,a));


        }
            sort(v.begin(),v.end());
            int vector_size=v.size();

          cout<<v[vector_size-1].second<<" "<<v[0].second<<endl;



    }



return 0;
}
