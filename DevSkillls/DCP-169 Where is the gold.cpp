#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    char arr[200][200];
    vector< pair<int, int> >v;
    for(int x=0; x<t; x++)
    {

        int r,c;
        scanf("%d %d",&r,&c);
        for(int i=0; i<r; i++)
        {
            scanf("%s",arr[i]);
        }

        for(int j=0; j<r; j++)
        {
            for(int k=0; k<c; k++)
            {
                if(arr[j][k]=='$')
                {
                    v.push_back(make_pair(j,k));
                }
            }
        }
        printf("Case %d:\n",x+1);
        if(!v.empty())
        {
            for(int z=0; z<v.size(); z++)
            {
                printf("%d,%d\n",v[z].first+1,v[z].second+1);
            }
        }
    else{

        printf("No Gold Found\n");
    }

        v.clear();
    }

}
