#include<bits/stdc++.h>
using namespace std;
int main(){
int test_case;
scanf("%d",&test_case);
for(int i=0;i<test_case;i++){
    double u=0,v,t,a;
    scanf("%lf %lf",&v,&t);
    a=(v-u)/t;
    printf("-%0.2f\n",a);


}
return 0;
}
