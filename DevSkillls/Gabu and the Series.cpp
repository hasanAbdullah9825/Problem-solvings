#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
scanf("%d",&t);

for(int i=0;i<t;i++){
    long long int n,result;
    scanf("%lld",&n);
    result=2*((n-1)*(n-1));

    printf("%lld\n",result);

}
return 0;
}
