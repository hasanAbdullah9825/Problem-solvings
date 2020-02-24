
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test_case;
    scanf("%d",&test_case);
    for(int i=0; i<test_case; i++)
    {
        int n;
        scanf("%d",&n);
        int number = (int(sqrt(n))*int(sqrt(n)));

        if(n==number)
        {
            printf("Case %d: YES\n",i+1);
        }
        else
        {
            printf("Case %d: NO\n",i+1);
       }

    }
}
