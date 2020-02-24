
#define ONLINE_JUDGE 1
#include<bits/stdc++.h>
using namespace std;

int main(){
int test_case;
scanf("%d",&test_case);

for(int i=0;i<test_case;i++){
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    int ans=abs(x1-x2)+abs(y1-y2);
    printf("Case %d: %d\n",i+1,ans);
}

}
