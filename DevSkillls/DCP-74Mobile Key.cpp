#include<bits/stdc++.h>
using namespace std;
int main(){
int test_case;
scanf("%d",&test_case);
for(int i=0;i<test_case;i++){

    long long int n;
    long long int a,b,c;
    scanf("%lld",&n);
    if(n%2==0){
        a=3*n;
        b=a-1;
        c=b-1;
    }
    else{
        a=(3*n)-2;
        b=a+1;
        c=b+1;
    }
    printf("Case #%d: %lld %lld %lld\n",i+1,a,b,c);
}


}
